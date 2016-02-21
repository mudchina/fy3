// By Mr.music  zhenjiang's ¶É¿Ú

inherit ROOM;

void create()
{
        set("short", "¶É¿Ú");
        set("long", @LONG
ÕâÀïÊÇÍ¨ÍùÈ¥ÑïÖÝ³ÇµÄ¶É¿Ú£¬Ç°Ãæ¾ÍÊÇ¹ö¹ö³¤½­£¬ÏòÄÏ¾ÍÊÇÖÐÖÝ¸®¡£
ÄãÕýÓÌÔ¥ÈçºÎ¹ý½­£¬·¢ÏÖ½­±ßÓÐÐ©Ð¡[33m´¬[37m¡£
LONG
        );

        set("valid_startroom", 1);
        set("no_sleep_room",1);

      set("item_desc", ([
              "chuan" : "ÕâÐ©Ð¡´¬Ò²Ðí¿ÉÒÔÉÏ¡£\n",
                "´¬":     "ÕâÊÇÐ©Ð¡´¬£¬ºÃÏóÃ»ÈË¹ÜÀí£¬Ò²Ðí¿ÉÒÔ×Ô¼º»®.\n",    
                       ]));
        set("objects", ([
                __DIR__"npc/dashou" : 1,
        ]));

        set("exits", ([
                "south" : __DIR__"guandao10.c",
        ]));

        setup();
//      "/obj/board/mainboard"->foo();
}

void init()
{
    add_action("do_enter", "enter");
    add_action("do_enter", "shang");
}

int do_enter(string sss)
{

object ob;
ob=this_player();
if ((sss!="boat")&&(sss!="chuan"))
  {
   tell_object(ob,"ÄãÏëÉÏÄÄÄØ£¿\n");
   return 1;
  }
 say(ob->query("name")+"ÉÏÁËÐ¡´¬£¬Àë°¶ÉÏÂ·. \n");
tell_object(ob,"ÄãÐ¡ÐÄÒíÒíµÄÉÏÁËÐ¡´¬.\n");
ob->move(__DIR__"jiangzhong");

  return 1;
 }
