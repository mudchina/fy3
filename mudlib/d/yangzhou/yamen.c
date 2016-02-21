// Room: /u/swordman/yangzhou/yamen
inherit ROOM;

void create ()
{
  set ("short", "扬州府衙");
  set ("long", @LONG
这里就是扬州府衙，衙门口是一对威武的石狮，深红色的大门紧闭
着，只有门口两名兵勇一动不动。俗话说：八字衙门朝钱开，对面就是
城里最有名的钱庄了。
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xijie1",
  "south" : __DIR__"zhifutang",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bingyong" : 2,
]));

  setup();
}
int valid_leave(object me, string dir)
{       if (dir == "south") {
        if (objectp(present("bingyong", environment(me)))) {
         if ( me->query_skill("literate",1) < 60 )
return notify_fail("兵勇拦住你说：知府大人向来不见粗人野夫！\n");
                }
        return ::valid_leave(me, dir);
        }
        return 1;
}

