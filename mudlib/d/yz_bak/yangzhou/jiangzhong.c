
// By Mr.music  yangzhou's ½­ÖÐ

inherit ROOM;

void create()
{
        set("short", "½­ÖÐ");
        set("long", @LONG
	ÄãÏÖÔÚÔÚ¶É´¬ÖÐ£¬´¬ÉÏÖ»ÓÐ½°Ã»ÓÐÈË£¬¿ÉÄÜÖ»ºÃ×Ô¼º[31m»®[37mÁË,Äã¿´ÁË¿´ÌÏÌÏ
½­Ë®£¬²»½û´òÁË¸ö²ü....¿É±ð·­ÁË...ËÄÃæÈ«ÊÇ¹ö¹ö³¤½­£¬Ïò±±ÊÇÑïÖÝ£¬ÏòÄÏ¾ÍÊÇ
ÖÐÖÝ³Ç

LONG
        );

        set("valid_startroom", 1);
        set("no_sleep_room",1);

//      set("item_desc", ([
//              "chuan" : "ÕâÐ©Ð¡´¬Ò²Ðí¿ÉÒÔÉÏ¡£\n",
  //              "´¬":     "ÕâÊÇÐ©Ð¡´¬£¬ºÃÏóÃ»ÈË¹ÜÀí£¬Ò²Ðí¿ÉÒÔ×Ô¼º»®.\n",
//      ]));

//      set("objects", ([
//              __DIR__"npc/shusheng" : 1,
//      ]));

//      set("exits", ([
//              "south" : __DIR__"dukoulu",
//      ]));

        setup();
//      "/obj/board/mainboard"->foo();
}

void init()
{
//    call_out("go_ahead",20,this_player() );
    add_action("do_hua", "hua");
}

int do_hua()
{
object ob;
ob=this_player();
tell_object(ob,"Äã¶¶¶¶ºöºöµÄÔÚÌÏÌÏ½­Ë®ÖÐÓÃÁ¦»®ÁËÒ»Õó. \n" );
if ( ob->query("kee") > 20) ob->add("kee",-20);
if( random( ob->query("kar") -10 ) == 0)
 {
     tell_object(ob,
   "Í»È»Ò»¸ö´óÀË´òÀ´£¬Äã»¹Ã»À´µÃ¼±½Ð³öÉù£¬¾Í±»½­Ë®ÍÌÃ»ÁË!\n");
//    ob->set("kee",0);
//    ob->set("gin",0);
    ob->unconcious();
   ob->move("/d/zhongzhou/dukou");
  return 1;
 }
ob->move("/d/zhongzhou/dukou");
return 1;
}

