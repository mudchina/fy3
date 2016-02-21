// jiaozhu.c ∫ŒÃË ÿ by ksusan 7/12/97 7/27/97 12:00

#include <ansi.h>

inherit NPC;
inherit F_MASTER;

#define MY_WALK_DIR "/d/wudu"
void say_something();
void go_dir();
int go_ask();
int go_up();


/*
string * cmds=({
    "u&me","hi","poem","addoil",
    "hi","sorry"});
*/

void create()
{
	set_name("∫ŒÃË ÿ", ({ "he tishou","he","tishou","master"}) );
    set("title","ŒÂ∂æΩÃΩÃ÷˜");
	set("nickname","√≤√¿»Áª®");
	set("age", 24);
	set("gender", "≈Æ–‘");

	set("long", @LONG
∫ŒÃË ÿ∑Ô—€∫¨¥∫£¨≥§√º»Î˜ﬁ£¨◊ÏΩ«∫¨◊≈–¶“‚£¨‘ºƒ™∂˛ Æ»˝ÀƒÀÍµƒƒÍºÕ£¨√¿—ﬁæ¯¬◊
µ´º˚À˝≥‡◊≈À´◊„£¨√ø∏ˆ◊„ı◊∫Õ ÷±€…œ∏˜Ã◊¡Ω∏ˆª∆Ω‘≤ª∑£¨––∂Ø ±Ωª∑ª•ª˜£¨Ô£Ô£”–…˘£
∑Ù…´∞◊ƒÂ“Ï≥££¨÷¨π‚»Á”Ò£¨Õ∑…œ≥§∑¢¥πºÁ£¨“≤“‘Ωª∑ ¯◊°°£ƒ„“ª ±æ™¥Ù¡À°£
LONG);
		set("shen_type", -1);

		set("str", 37);
		set("int", 30);
		set("spi", 30);
		set("con", 30);
		set("cps", 30);
		set("cor", 20);
		set("per", 30);

        set("max_force", 10000);
        set("force", 10000);
        set("force_factor", 50);

        set("combat_exp", 1000000);
        set("score", 100000);
	
	   	set_skill("literate", 160);

		create_family("ŒÂ∂æΩÃ", 4, "ΩÃ÷˜");

		set_skill("force", 150);
		set_skill("parry", 150);
		set_skill("dodge", 150);	
		set_skill("strike", 150);
		set_skill("poison", 150);

		set_skill("xiuluo-force", 150);
		set_skill("xuanyin-strike", 150);
		set_skill("wuxian-steps", 150);
		set_skill("gudu-dafa", 150);

		map_skill("dodge", "wuxian-steps");
		map_skill("unarmed", "xuanyin-strike");
		map_skill("parry", "xuanyin-strike");
		map_skill("force", "xiuluo-force");	

     	set("chat_chance",5);
     	set("chat_msg",({
        	(: say_something :),
        	(: go_dir :), 
		"“ªπ…»Ù”–»ÙŒﬁµƒ”ƒœ„∆Æ¿¥£¨»√»À–ƒ…Òµ¥—˙£¨«È≤ª◊‘Ω˚°£°£\n",
		}) );


		set("inquiry", ([
			"…˝º∂" : (: go_up :),
			"’ÚΩÃ÷Æ±¶" : (: go_ask :),
			"»·∂˘": "ƒ« «Œ“√«ŒÂ∂æΩÃµƒø™…Ω◊Ê ¶—Ω£°◊ÓΩ¸À˝√¶◊≈–¥π∆∂æ¥Û∑®ƒÿ£°\n",
			"ksusan": "ƒ« «Œ“√«ŒÂ∂æΩÃµƒø™…Ω◊Ê ¶—Ω£°◊ÓΩ¸À˝√¶◊≈–¥π∆∂æ¥Û∑®ƒÿ\n",
			"›º›º": "ƒ„Àµ›º›º—Ω£ø ƒ« «ŒÂ∂æΩÃµ⁄“ª√¿≈Æ£¨π¶∑Ú∫‹”≤µƒƒÿ£°\n",
			"demi": "ƒ„Àµ›º›º—Ω£ø ƒ« «ŒÂ∂æΩÃµ⁄“ª√¿≈Æ£¨π¶∑Ú∫‹”≤µƒƒÿ£°\n",
			"–’√˚": "Œ“æÕ «ŒÂ∂æΩÃΩÃ÷˜£¨∫ŒÃË ÿ—Ω£°Œ“∆Ø¡¡¬£ø£°\n",
			"name": "Œ“æÕ «ŒÂ∂æΩÃΩÃ÷˜£¨∫ŒÃË ÿ—Ω£°Œ“∆Ø¡¡¬£ø£°\n",
			"here": "ƒ„ªË¡ÀÕ∑¡À£ø’‚¿Ô «ŒÂ∂æΩÃ—Ω£°£°\n",
			"rumors": "√ª ¬±¬“¥ÚÃ˝£¨∫√∫√¡∑ƒ„µƒπ¶»•£°\n",
		]));	

	setup();
	add_money("gold", 5);
	carry_object(__DIR__"obj/wucai_cloth")->wear();
//	carry_object(__DIR__"obj/yaodai")->wield();
}
void init()
{
	object ob;

	::init();

	add_action("do_give", "give");

	if( interactive(ob = this_player()) && !is_fighting() )
	{
		remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}

}

void attempt_apprentice(object ob)
 {
        if ((int)ob->query("combat_exp") < 50000)
            command("say ƒ„µƒ µ’Ωæ≠—Èªπ≤ªπª—Ω£°\n");
			return ;
        if (((int)ob->query("mingwang")<0)&&((int)ob->query("mingwang")>-20000))
            command("say ƒ„µƒ∫⁄µ¿√˚Õ˚ªπ≤ªπª—Ω£°\n");
			return ;
         
        if ((int)ob->query("mingwang") >0)
            command("say ƒ„’˚ÃÏ∫Õ∞◊µ¿÷–»ÀªÏ‘⁄“ª∆£¨ªπ”–¡≥¿¥∞›Œ“Œ™ ¶£ø\n");
			return ;

        command("smile");
        command("say " + RANK_D->query_respect(ob) + 
 "£¨◊ˆ¡ÀŒ“µƒµ‹◊”æÕ «∫Ï∆Ï…± ÷£¨‘⁄ΩÃ÷–µÿŒªº´Œ™◊≥Á£¨∫√¥¶∂‡∂‡£°ƒ„“™≈¨¡¶—Ω£°\n\n");
        command("recruit " + ob->query("id") );
 		return ;
 }

 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("title", "ŒÂ∂æΩÃ ∫Ï∆Ïœ„÷˜");
				ob->add("combat_exp",10000);
 }

void greeting(object ob)
{
    int heal;
    heal=40;

	if( getuid(ob) == "ksusan")
	    {
	    message_vision("∫ŒÃË ÿÀ‡¡¢«·…˘µ¿£¨°∞∫ŒÃË ÿ∏¯œ…≈ÆΩ„Ω„«Î∞≤!°±...\n",ob);
		return ;
		}
	if (getuid(ob) == "apple")
 	   {
       command("touch " + (string)ob->query("id"));
   	   message_vision("∫ŒÃË ÿª∂…˘µ¿£¨°∞ƒ™≥ÓΩ„Ω„¿¥¿≤£øΩÒÃÏœ…≈ÆΩ„Ω„∫√œÎƒ„ƒÿ£°øÏ∏¯À˝»•mail∞….\n",ob);
       return ;
	   }
	if (getuid(ob) == "priscila")
 	   {
       command("lovelook " + (string)this_object()->query("id"));
   	   message_vision("∫ŒÃË ÿª∂…˘µ¿£¨°∞–°Êµ√√√√¿¥¿≤£øΩÒÃÏœ…≈ÆΩ„Ω„∫√œÎƒ„ƒÿ£°øÏ∏¯À˝»•mail∞….\n",ob);
       return ;
	   }
	if (ob->query("family/family_name")!="ŒÂ∂æΩÃ")
		{
    	message_vision("∫ŒÃË ÿø¥¡À$N“ª—€, ¿‰∫ﬂµ¿: …√¥≥ŒÂ∂æΩ˚µÿ! ƒƒ¿Ô◊ﬂ!\n∫ŒÃË ÿ∆ÀœÚ$N..\n",ob);
        kill_ob(ob);
        return ;
		}
    message_vision("∫ŒÃË ÿ÷Â√ºµ¿£¨°∞≤ª∫√∫√¡∑π¶µΩ¥¶¬“≈‹∏… ≤√¥£ø£°\n",ob);
    return ;
}


void say_something()
{   switch(random(3))
    {   case 0:
            message_vision("$NΩø–¶µ¿£∫Œ“√«ŒÂ∂æΩÃµƒ≈Æ◊”ø… «∏ˆ∏ˆ√≤√¿»Áª®µƒ”¥£¨ “™≤ª“™ÃÙ“ª∏ˆ£ø\n",this_object());
            break;
        case 1:
            message_vision("$N”ƒ”ƒµƒÀµ£∫°∞≥˛≥˛æ”»ª≤ª∂Æœ…≈ÆΩ„Ω„µƒ–ƒ£¨ ø…œß°£°££°\n",this_object());
            break;
        case 2:
               command("hi");
               command("lovelook " + (string)this_object()->query("id"));
            break;
//        default:
//             command(cmds[random(sizeof(cmds))]);
     }
} 
//
int go_up()
{
    object me;
    me=this_player();

	if (me->query("family/family_name")!="ŒÂ∂æΩÃ")
       return notify_fail("ƒ„≤ª «ŒÂ∂æµ‹◊”—Ω£°ø™ ≤√¥ÕÊ–¶\n");


		if ((int)me->query("combat_exp") >= 80000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <110 )
	    	{
				message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: ƒ„µƒ±æ√≈π¶∑Úªπ≤ªπªæ´¥ø—Ω£°\n", me);
			}else{
				if (me->query("title")=="ŒÂ∂æΩÃ Ω÷Î≥§¿œ"){
    			message_vision("∫ŒÃË ÿ÷Â√º∂‘$Nµ¿: ƒ„“—æ≠ «±æΩÃΩ÷Î≥§¿œ¿≤£°∫˙ƒ÷ ≤√¥—Ω£°\n", me);
				}else{
    			message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: ∫√∞…£¨¥”ΩÒÃÏ∆ƒ„æÕ «±æΩÃΩ÷Î≥§¿œ¿≤£°∫√∫√∏…∞°!\n", me);
				seteuid(getuid(me));
				me->set("title", "ŒÂ∂æΩÃ Ω÷Î≥§¿œ");
				me->add("combat_exp",7500);
				me->create_family("ŒÂ∂æΩÃ", 5, "≥§¿œ");
				     }
				return 1;
		   }
		}	    							

		if ((int)me->query("combat_exp") >= 40000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <90 )
	    	{
				message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: ƒ„µƒ±æ√≈π¶∑Úªπ≤ªπªæ´¥ø—Ω£°\n", me);
			}else{
				if (me->query("title")=="ŒÂ∂æΩÃ “¯Û∏ª§∑®"){
    			message_vision("∫ŒÃË ÿ÷Â√º∂‘$Nµ¿: ƒ„“—æ≠ «±æΩÃ“¯Û∏ª§∑®¿≤£°∫˙ƒ÷ ≤√¥—Ω£°\n", me);
				}else{
    			message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: ∫√∞…£¨¥”ΩÒÃÏ∆ƒ„æÕ «±æΩÃ“¯Û∏ª§∑®¿≤£°∫√∫√∏…∞…!\n", me);
				seteuid(getuid(me));
				me->set("title", "ŒÂ∂æΩÃ “¯Û∏ª§∑®");
				me->add("combat_exp",6000);
				me->create_family("ŒÂ∂æΩÃ", 5, "ª§∑®");
					}
				return 1;
				}
		}	    							

		if ((int)me->query("combat_exp") >= 20000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <70 )
	    	{
				message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: ƒ„µƒ±æ√≈π¶∑Úªπ≤ªπªæ´¥ø—Ω£°\n", me);
			}else{
				if (me->query("title")=="ŒÂ∂æΩÃ –ÃÃ√÷¥ ¬"){
    			message_vision("∫ŒÃË ÿ÷Â√º∂‘$Nµ¿: ƒ„“—æ≠ «±æΩÃ–ÃÃ√÷¥ ¬¿≤£°∫˙ƒ÷ ≤√¥—Ω£°\n", me);
				}else{
    			message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: ∫√∞…£¨¥”ΩÒÃÏ∆ƒ„æÕ «–ÃÃ√÷¥ ¬¿≤£°∫√∫√∏…!\n", me);
				seteuid(getuid(me));
				me->set("title", "ŒÂ∂æΩÃ –ÃÃ√÷¥ ¬");
				me->add("combat_exp",4500);
				me->create_family("ŒÂ∂æΩÃ", 5, "÷¥ ¬");
					}
			return 1;
				}
		}	    							

		if ((int)me->query("combat_exp") >=10000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <50 )
	    	{
				message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: ƒ„µƒ±æ√≈π¶∑Úªπ≤ªπªæ´¥ø—Ω£°\n", me);
			}else{
				if (me->query("title")=="ŒÂ∂æΩÃ «‡¡˙—≤≤Ï"){
    			message_vision("∫ŒÃË ÿ÷Â√º∂‘$Nµ¿: ƒ„“—æ≠ «±æΩÃ«‡¡˙—≤≤Ï¿≤£°∫˙ƒ÷ ≤√¥—Ω£°\n", me);
				}else{
    			message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: ∫√∞…£¨¥”ΩÒÃÏ∆ƒ„æÕ «±æΩÃ«‡¡˙—≤≤Ï¿≤£°∫√∫√∏…!\n", me);
				seteuid(getuid(me));
				me->set("title", "ŒÂ∂æΩÃ «‡¡˙—≤≤Ï");
				me->add("combat_exp",3000);
			    	}
			return 1;
			   }
		}	    							

        if ((int)me->query("combat_exp") >=5000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <30 )
	    	{
				message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: ƒ„µƒ±æ√≈π¶∑Úªπ≤ªπªæ´¥ø—Ω£°\n", me);
			}else{
				if (me->query("title")=="ŒÂ∂æΩÃ ¡È–´ª¢Œ¿"){
    			message_vision("∫ŒÃË ÿ÷Â√º∂‘$Nµ¿: ƒ„“—æ≠ «±æΩÃ¡È–´ª¢Œ¿¿≤£°∫˙ƒ÷ ≤√¥—Ω£°\n", me);
				}else{
    			message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: ∫√∞…£¨¥”ΩÒÃÏ∆ƒ„æÕ «±æΩÃ¡È–´ª¢Œ¿¿≤£°∫√∫√∏…!\n", me);
				seteuid(getuid(me));
				me->set("title", "ŒÂ∂æΩÃ ¡È–´ª¢Œ¿");
				me->add("combat_exp",1500);
					}
			return 1;
				}
		}	    							



	message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: µ»ƒ„µƒæ≠—È∫Õπ¶∑Ú∏ﬂ¡À‘Ÿ¿¥∞…°£°£°£\n", me);
			return 1;
}

int go_ask()
{
    object me;
    me=this_player();

	if ((string)me->query("family/family_name")!="ŒÂ∂æΩÃ")
       return 1;

	if (( me->query_skill("xuanyin-strike", 1) <60 )||(me->query_skill("xiuluo-force",1)<60))
	    {
	    message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: µ»ƒ„µƒπ¶∑Ú∏ﬂ¡À‘Ÿ¿¥∞…°£°£°£\n", me);
			return 1;
		}
	if (query_temp("no_lingpai"))
	    {
	    message_vision("∫ŒÃË ÿ«·–¶“ª…˘£¨∂‘$NÀµµ¿: ƒ„¿¥ÕÌ¿≤£¨ª∆ª®≤À∂º¡π¿≤£°\n", me);
			return 1;
		}

    message_vision("∫ŒÃË ÿ–¶◊≈∂‘$NÀµµ¿: ƒ„∏¯Œ“’““ª∂‰¡˙——ª®¿¥‘ŸÀµ∞…...\n", me);
    me->set_temp("can_give",1);
    return 1;
	
}

int do_give(string arg)
{
	object ob1,me,ob;

	me=this_player();
	ob1 = present("longyan hua", me);

    if (me->query_temp("can_give")!=1) return 0;

	if ((arg!="longyan hua to he tishou")&&(arg!="longyan hua to he"))
    return 0;


	if (!objectp(ob1))  return 0;

    destruct(ob1);
 
    message_vision(
"$Nπßπßæ¥æ¥µƒ∞—“ª∂‰¡˙——ª®Ωª∏¯∫ŒÃË ÿ, ∫ŒÃË ÿµ„Õ∑–¶µ¿£¨°∞≤ª¥Ì£¨≤ª¥Ì°±£¨Àµ◊≈
∏¯$N“ªøÈ¡Ó≈∆£¨°∞’‚æÕ «ŒÂ∂æΩÃµƒ’Ú…Ω÷¡±¶£¨ƒ„ƒ√»•¡ÏŒÚ∞…. \n" ,me);
	set_temp("no_lingpai",1);
    clone_object(__DIR__"obj/wuxian_ling")->move(me);
    me->delete_temp("can_give");
    return 1;
}
//
void go_dir()
{   string *dir;
    mapping exits;
    int willgo;
    exits=environment(this_object())->query("exits");
    if(!mapp(exits))    return;
    dir=keys(exits);
    if(strsrch(exits[dir[willgo=random(sizeof(dir))]],MY_WALK_DIR)>=0)
        command("go " + dir[willgo]);
} 

