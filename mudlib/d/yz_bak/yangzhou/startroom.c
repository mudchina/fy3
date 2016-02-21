// By Mr.music  yangzhou's Ã÷ÔÂ¾ÆÂ¥

inherit ROOM;

void create()
{
        set("short", "Ã÷ÔÂ¾ÆÂ¥");
        set("long", @LONG
        ÕâÀï¾ÍÊÇÑïÖÝ³ÇÀïÃûÑïËÄº£µÄÃ÷ÔÂ¾ÆÂ¥£¬ÕâÀïµÄÃûµãÃ¿Äê»á
×÷Îª¹±Æ··ÉÂíËÍ¾©£¬Àú´úÍõºò½«Ïà¡¢ºÀ¿ÍÃûÁ÷ÎÞ²»ÖÁ´ËÇ×ÁÙÆ·³¢¡£Ìü
ÄÚÈËÉù¶¦·Ð£¬¾ÆÏãÆË±Ç£¬Ê¹Äã¸Ðµ½ºÃÏóÓÐµã¶öÁË¡£Â¥ÉÏÊÇ¿ÍÕ»£¬ÍâµØ
À´µÄ¿ÍÈËÒ²¿ÉÒÔÔÚ´ËÐÝÏ¢¹ýËÞ£¬ÈýÂ¥ÊÇÎ×Ê¦ÃÇµÄ»á¿ÍÌü£¬Ïëµ½Ê²Ã´ºÃ
µÄÒâ¼ûºÍ½¨Òé£¬ÇëÔÚÈýÂ¥·Ã¿ÍÁôÑÔ°åÁôÑÔ¡£

LONG
        );

        set("no_fight", 1);
        set("valid_startroom", 1);
        set("no_sleep_room",1);

        set("item_desc", ([
                "paizi" : "Â¥ÉÏÎÔ·¿£¬Ã¿Ò¹Ò»Á½°×Òø¡£\n",
                         ]));

        set("objects", ([
                __DIR__"npc/xiaoer" : 1,
                __DIR__"npc/weixiaobao"  : 1,
        ]));

        set("exits", ([
                "east" : __DIR__"pishijie3",
                "up" : __DIR__"mingyue2",
        ]));

        setup();
}

void init()
{
add_action("to_hankou","quhankou");
add_action("do_gui","gui");
add_action("do_gui","kneel");
}

int do_gui()
{
return 1;
}

int to_hankou()
{

tell_object(this_player(),"[1;33m»ï¼ÆËµ£ºÕýºÃºóÔºÓÐ³µµ½ºº¿Ú£¬´øÄãÒ»³Ì°É.[0;37m\n");

say(this_player()->query("name")+"¸ú×ÅÐ¡»ï¼Æµ½ºóÔºÁË¡£\n");


this_player()->move(__DIR__"houyuan");


return 1;
}


int valid_leave(object me, string dir)
{

//         if( ( ! wizardp(me) ) && dir == "up" ) return 
//   notify_fail("µêÐ¡¶þµ²ÔÚÂ¥ÌÝÇ°£¬ÅãÐ¦µÀ£¬Â¥ÉÏÕý×°ÐÞ£¬ÄúÀÏ»¹ÊÇ´óÌü×ø°É!\n");

        if ( !me->query_temp("rent_paid") && dir == "up" && !wizardp(me))
        return 
notify_fail("µêÐ¡¶þµ²ÔÚÂ¥ÌÝÇ°£¬¼éÐ¦µÀ£ºÂ¥ÉÏÊÇÑÅ×ù£¬ÄúÀÏ»¹ÊÇ´óÌü×ø°É!\n");

// if who upstair for post in wizroom , back money to it.
if( ! wizardp(me) )
    {
       if( me->query_temp("post_ok_la")  && dir == "out")
        {
          say("µêÐ¡¶þ¶Ô"+me->query("name")+"¾Ï¸ö¹ªÁ¬ÉùµÀ£º´óÒ¯Âý×ß£¡\n");
          write("µêÐ¡¶þÇÄÇÄ°ÑÄãÀ­µ½Ò»±ß. \n");
          write("µêÐ¡¶þÐ¡ÉùËµµÀ£º²»ÖªÄúÊÇÎ×Ê¦µÄÅóÓÑ£¬»¹ÍûÄúÀÏº£º­!\n");
          write("µêÐ¡¶þ³ËÈË²»×¢Òâ£¬ÈûÁË¶þÁ½Òø×Ó¸øÄã. \n");
          clone_object("/obj/money/silver")->move(me);
          clone_object("/obj/money/silver")->move(me);
//error:           me->add_money("silver", 2);
          me->delete_temp("post_ok_la");
         }
     }

        return ::valid_leave(me, dir);
}
