// Room: /u/yuki/songshan/simen.c

inherit ROOM;

void create()
{
        set("short", "芦岩寺寺门");
        set("long", @LONG
    这里是芦岩寺的寺门，寺门被郁郁葱葱的树木遮住了大半。
门口有两个白发苍苍的老翁正在下棋，偶尔会为一步棋争的脸红
脖子粗。
LONG
        );
        set("no_clean_up", 0);
        set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"luyansi.c",
  "west" : "/d/songshan/luyanpubu.c",
]));
        set("objects", ([
                 __DIR__"npc/xianhe": 1,
                 __DIR__"npc/lupan": 1,
        ]) );
         setup();
}


int valid_leave(object me, string dir)
{
        object ob;
        
        if(!userp(me))  {
                      if (dir=="east")
                      return 0;
                        else return 1;
     }
        if ( (dir=="east") && (me->query("family/family_name")!="嵩山派" ))
        {
                ob = present("xianhe");
                if(!ob) return 1;
                        message_vision("\n$N说道：此乃本门重地，请不要乱闯\n", ob, me);
                        return  notify_fail("");
        }
        return ::valid_leave(me, dir);
}

