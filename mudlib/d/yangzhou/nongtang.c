// Room: /d/yangzhou/nongtang
inherit ROOM;

void create ()
{
  set ("short", "小弄堂");
  set ("long", @LONG
这是通往赌场的一个小弄堂,从这里向北就是赌场了。
LONG);

  set("outdoors", "/d/yangzhou");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"nandaj1",
  "north" : __DIR__"duchang",
]));
  set("light_up", 1);

  setup();
}
int valid_leave(object me,string dir)
{
        if(dir=="north")me->set_temp("where_to","north");
        return ::valid_leave(me,dir);
}
