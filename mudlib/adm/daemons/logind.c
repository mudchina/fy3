//
// logind.c
// last modify bu music 97.1.25

#include <ansi.h>
#include <command.h>
#include <login.h>

inherit F_DBASE;

int new_player = 0;
int wiz_lock_level = WIZ_LOCK_LEVEL;
string *banned_name = ({
        "Äã", "ÎÒ", "Ëû", "Ëı", "Ëü","°Ö", 
        "½£ÏÈÉú","Ğ¦ÔÆ","ÀÏÁù","Äª³î","ÄÏ¹¬Òİ",
});

string *open_site = ({
        "202.102.7.141",
        "202.100.192.%*d",
        "202.100.193.%*d",
        "202.102.7.14%*d",
});


string *banned_site = ({
        "140.127.86.255",
        
});

private void get_id(string arg, object ob);
private void confirm_id(string yn, object ob);
object make_body(object ob);
private void init_new_player(object user);
//void init_new_player(object user);

varargs void enter_world(object ob, object user, int silent);
varargs void reconnect(object ob, object user, int silent);
object find_body(string name);
int check_legal_id(string arg);
int check_legal_name(string arg);

void create() 
{
        seteuid(getuid());
        set("channel_id", "Á¬Ïß¾«Áé");
}

void logon(object ob)
{
        object *usr;
        int i, wiz_cnt, ppl_cnt, login_cnt;

if (BAN_D->is_banned(query_ip_name(ob))  ||
            BAN_D->is_banned(query_ip_number(ob))) {
                write("¶Ô²»Æğ£¬Çëemail¸øÌìÉñÉêÊö¡£\n");
                destruct(ob);
                return ;
        }
// ----

        cat(WELCOME);
        UPTIME_CMD->main();
        usr = users();
        wiz_cnt = 0;
        ppl_cnt = 0;
        login_cnt = 0;
        for(i=0; i<sizeof(usr); i++) {
                if( !environment(usr[i]) ) login_cnt++;
                else if( wizardp(usr[i]) ) wiz_cnt++;
                else ppl_cnt++;
        }
//        printf("Ä¿Ç°¹²ÓĞ %d Î»Î×Ê¦¡¢%d Î»Íæ¼ÒÔÚÏßÉÏ£¬ÒÔ¼° %d 
// Î»Ê¹ÓÃÕß³¢ÊÔÁ¬ÏßÖĞ¡£\n\n",
//                wiz_cnt, ppl_cnt, login_cnt );
        printf("Ä¿Ç°¹²ÓĞ %d Î»Ì½ÏÕ¼ÒÔÚÏßÉÏ£¬ÒÔ¼° %d Î»Ì½ÏÕÕß×¼±¸ÖĞ...\n\n",
                wiz_cnt+ppl_cnt, login_cnt );


        write("ÄúµÄÓ¢ÎÄÃû×Ö£º");
        input_to( (: get_id :), ob );
}

private void get_id(string arg, object ob)
{
        object ppl;


        arg = lower_case(arg);
        if( !check_legal_id(arg)) {
                write("ÄúµÄÓ¢ÎÄÃû×Ö£º");
                input_to("get_id", ob);
                return;
        }

#ifdef MAX_USERS
        if( (string)SECURITY_D->get_status(arg)=="(player)"
        && sizeof(users()) >= MAX_USERS ) {
                ppl = find_body(arg);
        // Only allow reconnect an interactive player when MAX_USERS exceeded.
                if( !ppl || !interactive(ppl) ) {
                        write("¶Ô²»Æğ£¬" + MUD_NAME + 
"µÄÌ½ÏÕÕßÒÑ¾­Ì«¶àÁË£¬Çë´ı»áÔÙÀ´¡£\n");
                        destruct(ob);
                        return;
                }
        }
#endif

// ÁÙÊ±¹©ÌõÊÔÓÃ wizlock ÓÀ¾Ã
//       if(wiz_lock_level<1)  wiz_lock_level=1;
//
        if( wiz_level(arg) < wiz_lock_level ) {
                write("¶Ô²»Æğ£¬" + MUD_NAME + "Ä¿Ç°ÏŞÖÆÎ×Ê¦µÈ¼¶ " + 
// WIZ_LOCK_LEVEL
wiz_lock_level
                        + " ÒÔÉÏµÄÈË²ÅÄÜÁ¬Ïß¡£\n");
                destruct(ob);
                return;
        }
        

        if( (string)ob->set("id", arg) != arg ) {
                write("Failed setting user name.\n");
                destruct(ob);
                return;
        }

        if( arg=="guest" ) {
                // If guest, let them create the character.
                confirm_id("Yes", ob);
                return;
        } else if( file_size(ob->query_save_file() + __SAVE_EXTENSION__) >= 0 
) {
                if( ob->restore() ) {
                        write("ÇëÊäÈëÃÜÂë£º");
                        input_to("get_passwd", 1, ob);
                        return;
                }
                write("ÄúµÄÈËÎï´¢´æµ²³öÁËÒ»Ğ©ÎÊÌâ£¬ÇëÀûÓÃ guest ÈËÎïÍ¨ÖªÎ×Ê¦´¦Àí¡£\n");
                destruct(ob);
                return;
        }

        write("Ê¹ÓÃ " + (string)ob->query("id") + " Õâ¸öÃû×Ö½«»á´´ÔìÒ»¸öĞÂµÄÈËÎï£¬ÄúÈ·¶¨Âğ(y/n)£¿");
        input_to("confirm_id", ob);
}

private void get_passwd(string pass, object ob)
{
        string my_pass;
        object user;

        write("\n");
        my_pass = ob->query("password");
        if( crypt(pass, my_pass) != my_pass ) {
                write("ÃÜÂë´íÎó£¡\n");
                destruct(ob);
                return;
        }

        // Check if we are already playing.
        user = find_body(ob->query("id"));
        if (user) {
                if( user->query_temp("netdead") ) {
                        reconnect(ob, user);
                        return;
                }
                
write("ÄúÒª½«ÁíÒ»¸öÁ¬ÏßÖĞµÄÏàÍ¬ÈËÎï¸Ï³öÈ¥£¬È¡¶ø´úÖ®Âğ£¿(y/n)");
                input_to("confirm_relogin", ob, user);
                return;
        }

        if( objectp(user = make_body(ob)) ) {
                if( user->restore() ) {
                        log_file( "USAGE", sprintf("%s loggined from %s %s)\n",
user->query("name"),
                                query_ip_name(ob), ctime(time()) ) );
                        enter_world(ob, user);
                        return;
                } else {
                        destruct(user);
                }
        }
        write("ÇëÄúÖØĞÂ´´ÔìÕâ¸öÈËÎï¡£\n");
        confirm_id("y", ob);
}

private void confirm_relogin(string yn, object ob, object user)
{
        object old_link;

        if( yn=="" ) {
                
write("ÄúÒª½«ÁíÒ»¸öÁ¬ÏßÖĞµÄÏàÍ¬ÈËÎï¸Ï³öÈ¥£¬È¡¶ø´úÖ®Âğ£¿(y/n)");
                input_to("confirm_relogin", ob, user);
                return;
        }       

        if( yn[0]!='y' && yn[0]!='Y' ) {
                write("ºÃ°É£¬»¶Ó­ÏÂ´ÎÔÙÀ´¡£\n");
                destruct(ob);
                return;
        } else {
                tell_object(user, "ÓĞÈË´Ó( " + query_ip_number(ob)
                        + " )È¡´úÄãËù¿ØÖÆµÄÈËÎï¡£\n");
                log_file( "USAGE", sprintf("%s replaced by %s (%s)\n", 
user->query("name"),
                        query_ip_name(ob), ctime(time()) ) );
        }

        // Kick out tho old player.
        old_link = user->query_temp("link_ob");
        if( old_link ) {
                exec(old_link, user);
                destruct(old_link);
        }

        reconnect(ob, user);    
}

private void confirm_id(string yn, object ob)
{
        if( yn=="" ) {
                write("Ê¹ÓÃÕâ¸öÃû×Ö½«»á´´ÔìÒ»¸öĞÂµÄÈËÎï£¬ÄúÈ·¶¨Âğ(y/n)£¿");
                input_to("confirm_id", ob);
                return;
        }       

        if( yn[0]!='y' && yn[0]!='Y' ) {
                write("ºÃ°É£¬ÄÇÃ´ÇëÖØĞÂÊäÈëÄúµÄÓ¢ÎÄÃû×Ö£º");
                input_to("get_id", ob);
                return;
        }

        write( @TEXT

ÇëÄúÏëÒ»¸öÓĞ¸öĞÔµÄÖĞÎÄÃû×Ö£¬Õâ¸öÃû×Ö½«´ú±íÄã£¬¶øÇÒÍùºó½«²»ÄÜËæÒâ¸ü¸Ä£¬
ÇëÎñ±ØÉ÷ÖØ¡£±¾ÓÎÏ·±£ÁôÉ¾³ıÃû×Ö²»ÑÅÍæ¼ÒµÄÈ¨Á¦¡£(³ıÁËÃû×ÖÖ®Íâ£¬»¹¿ÉÈ¡´Â
ºÅ¡¢±ğ³Æ£¬ËùÒÔ½¨ÒéÄúÈ¡Ò»¸ö±È½ÏÏñÃû×ÖµÄÖĞÎÄÃû×Ö¡£)

TEXT
        );
        write("ÄúµÄÖĞÎÄÃû×Ö£º");
        input_to("get_name", ob);
}

private void get_name(string arg, object ob)
{
        if( !check_legal_name(arg) ) {
                write("ÄúµÄÖĞÎÄÃû×Ö£º");
                input_to("get_name", ob);
                return;
        }

        printf("%O\n", ob);
        ob->set("name", arg);
        write("ÇëÉè¶¨ÄúµÄÃÜÂë£º");
        input_to("new_password", 1, ob);
}

private void new_password(string pass, object ob)
{
        write("\n");
        if( strlen(pass)<3 ) {
                write("ÃÜÂëµÄ³¤¶ÈÖÁÉÙÒªÈıÎ»£¬ÇëÖØÉèÄúµÄÃÜÂë£º");
                input_to("new_password", 1, ob);
                return;
        }
        ob->set("password", crypt(pass,0) );
        write("ÇëÔÙÊäÈëÒ»´ÎÄúµÄÃÜÂë£¬ÒÔÈ·ÈÏÄúÃ»¼Ç´í£º");
        input_to("confirm_password", 1, ob);
}

private void confirm_password(string pass, object ob)
{
        string old_pass;
        write("\n");
        old_pass = ob->query("password");
        if( crypt(pass, old_pass)!=old_pass ) {
                write("ÄúÁ½´ÎÊäÈëµÄÃÜÂë²¢²»Ò»Ñù£¬ÇëÖØĞÂÉè¶¨Ò»´ÎÃÜÂë£º");
                input_to("new_password", 1, ob);
                return;
        }

        write("ÄúµÄµç×ÓÓÊ¼şµØÖ·£º");
        input_to("get_email",  ob);
}

private void get_email(string email, object ob)
{
        object user;

        ob->set("email", email);

  // If you want do race stuff, ask player to choose one here, then you can
  // set the user's body after the question is answered. The following are
        // options for player's body, so we clone a body here.
        ob->set("body", USER_OB);
        if( !objectp(user = make_body(ob)) )
                return;

        user->set("title", "ÆÕÍ¨Î×Ê¦");
        user->set("birthday", time() );
        user->set("potential", 100);

        user->set("str", 13 + random(19));
        user->set("cps", 13 + random(19));
        user->set("int", 13 + random(19));
        user->set("cor", 13 + random(19));
        user->set("con", 13 + random(19));
        user->set("spi", 13 + random(19));
        user->set("per", 13 + random(19));
        user->set("kar", 13 + random(19));

        user->set("mingwang",0);
        user->set("balance",200);
        user->set("channels", ({ "chat", "rumor","es" }) );
        user->set("food", 100);
        user->set("water",100);


        write("ÄúÒª°çÑİÄĞĞÔ(m)µÄ½ÇÉ«»òÅ®ĞÔ(f)µÄ½ÇÉ«£¿");
        input_to("get_gender", ob, user);
}

private void get_gender(string gender, object ob, object user)
{
        if( gender=="" ) {
                write("ÄúÒª°çÑİÄĞĞÔ(m)µÄ½ÇÉ«»òÅ®ĞÔ(f)µÄ½ÇÉ«£¿");
                input_to("get_gender", ob, user);
                return;
        }

        if( gender[0]=='m' || gender[0]=='M' )
                user->set("gender", "ÄĞĞÔ");
        else if( gender[0]=='f' || gender[0]=='F' )
                user->set("gender", "Å®ĞÔ" );
        else {
                write("¶Ô²»Æğ£¬ÄúÖ»ÄÜÑ¡ÔñÄĞĞÔ(m)»òÅ®ĞÔ(f)µÄ½ÇÉ«£º");
                input_to("get_gender", ob, user);
                return;
        }

        log_file( "USAGE", sprintf("%s was created from %s (%s)\n", 
user->query("id"),
                query_ip_name(ob), ctime(time()) ) );
        init_new_player(user);
        enter_world(ob, user);
}

object make_body(object ob)
{
        string err;
        object user;
        int n;

        user = new(ob->query("body"));
        if(!user) {
                
write("ÏÖÔÚ¿ÉÄÜÓĞÈËÕıÔÚĞŞ¸ÄÊ¹ÓÃÕßÎï¼şµÄ³ÌÊ½£¬ÎŞ·¨½øĞĞ¸´ÖÆ¡£\n");
                write(err+"\n");
                return 0;
        }
        seteuid(ob->query("id"));
        export_uid(user);
        export_uid(ob);
        seteuid(getuid());
        user->set("id", ob->query("id"));
        user->set_name( ob->query("name"), ({ ob->query("id")}) );
        return user;
}

private void init_new_player(object user)
{

        user->set("title", "ÆÕÍ¨°ÙĞÕ");
        user->set("birthday", time() );
        user->set("potential", 100);

        user->set("str", 13 + random(19));
        user->set("cps", 13 + random(19));
        user->set("int", 13 + random(19));
        user->set("cor", 13 + random(19));
        user->set("con", 13 + random(19));
        user->set("spi", 13 + random(19));
        user->set("per", 13 + random(19));
        user->set("kar", 13 + random(19));

        user->set("mingwang",0);
        user->set("balance",200);
        user->set("channels", ({ "chat", "rumor" }) );
        user->set("food", 100);
        user->set("water",100);

        new_player=1;
}

varargs void enter_world(object ob, object user, int silent)
{
        object cloth,shoe, room;
        string startroom;

        user->set_temp("link_ob", ob);
        ob->set_temp("body_ob", user);
        exec(user, ob);

        write("Ä¿Ç°È¨ÏŞ£º" + wizhood(user) + "\n");
        user->setup();

        // In case of new player, we save them here right aftre setup 
        // compeleted.
        user->save();
        ob->save();
        user->apply_condition("autosave", 1);
        if ( user->query("gender")=="Å®ĞÔ")
       {
	  shoe = new("/obj/armor/female-shoe.c");
          switch (random(8))
	      {
	case 1:
	   cloth = new("/obj/armor/female1-cloth.c");
	   break;
	case 2:
	   cloth = new("/obj/armor/female2-cloth.c");
	   break;
	case 3:
	   cloth = new("/obj/armor/female3-cloth.c");
	   break;
        case 4:
	   cloth = new("/obj/armor/female4-cloth.c");
	   break;
	case 5:
	   cloth = new("/obj/armor/female5-cloth.c");
	   break;
	case 6:
	   cloth = new("/obj/armor/female6-cloth.c");
	   break;
	case 7:
	   cloth = new("/obj/armor/female7-cloth.c");
	   break;
	default:
	  cloth = new("/obj/armor/female8-cloth.c");
		}
		   }
	  else
		{
	shoe = new("/obj/armor/male-shoe.c");
	switch (random(8))
	{
          case 1:
	     cloth = new("/obj/armor/male1-cloth.c");
	     break;
	  case 2:
	     cloth = new("/obj/armor/male2-cloth.c");
	     break;
	  case 3:
	     cloth = new("/obj/armor/male3-cloth.c");
	     break;
	  case 4:
	     cloth = new("/obj/armor/male4-cloth.c");
	     break;
	  case 5:
	     cloth = new("/obj/armor/male5-cloth.c");
	     break;
	  case 6:
	     cloth = new("/obj/armor/male6-cloth.c");
	     break;
	  case 7:
	     cloth = new("/obj/armor/male7-cloth.c");
	     break;
	  default:
	     cloth = new("/obj/armor/male8-cloth.c");
		}
				}
        cloth->move(user);
        cloth->wear();
        shoe->move(user);
        shoe->wear();

        if(!user->query("mingwang")) user->set("mingwang",0);

        if( !silent ) {
                if (new_player == 1 ) {
                        F_MORE->start_more(read_file("/adm/etc/new_player"));
                                        new_player=0;
                                      } 
                F_MORE->start_more(read_file(MOTD));
                if( user->is_ghost() )
                        startroom = DEATH_ROOM;
                else if( !stringp(startroom = user->query("startroom")) )
                        startroom = START_ROOM;

                if( !catch(load_object(startroom)) )
                        user->move(startroom);
                else {
                        user->move(START_ROOM);
                        startroom = START_ROOM;
                        user->set("startroom", START_ROOM);
                }
                tell_room(startroom, user->query("name") + 
"Á¬Ïß½øÈëÕâ¸öÊÀ½ç¡£\n",
                        ({user}));
        }
           user->set_temp("start_login_time", (int)time() + 30 );
        CHANNEL_D->do_channel( this_object(), "sys",
                sprintf("%sÓÉ%sÁ¬Ïß½øÈë¡£", user->name(), 
query_ip_name(user)) );
        UPDATE_D->check_user(user);
                if( user->query("new_mail") ) {
           write("\n[1;36mÄãÍ»È»ÓĞÖÖÔ¤¸Ğ£¬ÓĞĞÅÀ´À²£¿ ...[0;37m\n\n");
//                        user->set("new_mail", 0);
// ¸ÄÔÚ¶ÁĞÅºóÈ¡Ïû
                                            }

}

varargs void reconnect(object ob, object user, int silent)
{
        user->set_temp("link_ob", ob);
        ob->set_temp("body_ob", user);
        exec(user, ob);

        user->reconnect();
        if( !silent ) {
                tell_room(environment(user), user->query("name") + 
"ÖØĞÂÁ¬Ïß»Øµ½Õâ¸öÊÀ½ç¡£\n",
                ({user}));
        }
        CHANNEL_D->do_channel( this_object(), "sys",
                sprintf("%sÓÉ%sÖØĞÂÁ¬Ïß½øÈë¡£", user->query("name"), 
query_ip_name(user)) );
        UPDATE_D->check_user(user);
}

int check_legal_id(string id)
{
        int i;
        i = strlen(id);
        if( (strlen(id) < 3) || (strlen(id) > 8 ) ) {
                write("¶Ô²»Æğ£¬ÄãµÄÓ¢ÎÄÃû×Ö±ØĞëÊÇ 3 µ½ 8 ¸öÓ¢ÎÄ×ÖÄ¸¡£\n");
                return 0;
        }
        while(i--)
                if( id[i]<'a' || id[i]>'z' ) {
                        write("¶Ô²»Æğ£¬ÄãµÄÓ¢ÎÄÃû×ÖÖ»ÄÜÓÃÓ¢ÎÄ×ÖÄ¸¡£\n");
                        return 0;
                }
  
        return 1;
}

int check_legal_name(string name)
{
        int i;

        i = strlen(name);
        
        if( (strlen(name) < 4) || (strlen(name) > 8 ) ) {
                write("¶Ô²»Æğ£¬ÄãµÄÖĞÎÄÃû×Ö±ØĞëÊÇ 2 µ½ 6 ¸öÖĞÎÄ×Ö¡£\n");
                return 0;
        }
        while(i--) {
                if( name[i]<=' ' ) {
                        write("¶Ô²»Æğ£¬ÄãµÄÖĞÎÄÃû×Ö²»ÄÜÓÃ¿ØÖÆ×ÖÔª¡£\n");
                        return 0;
                }
                if( i%2==0 && !is_chinese(name[i..<0]) ) {
                        write("¶Ô²»Æğ£¬ÇëÄúÓÃ¡¸ÖĞÎÄ¡¹È¡Ãû×Ö¡£\n");
                        return 0;
                }
        }
        if( member_array(name, banned_name)!=-1 ) {
                write("¶Ô²»Æğ£¬ÕâÖÖÃû×Ö»áÔì³ÉÆäËûÈËµÄÀ§ÈÅ¡£\n");
                return 0;
        }

        return 1;
}

object find_body(string name)
{
        object ob, *body;

        if( objectp(ob = find_player(name)) )
                return ob;
        body = children(USER_OB);
        for(int i=0; i<sizeof(body); i++)
                if( clonep(body[i])
                &&      getuid(body[i]) == name ) return body[i];

        return 0;
}

int set_wizlock(int level)
{
        if( wiz_level(this_player(1)) <= level )
                return 0;
        if( geteuid(previous_object()) != ROOT_UID )
                return 0;
        wiz_lock_level = level;
        return 1;
}
 
