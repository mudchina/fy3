// Room: /d/xxy/zoulang1.c

inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
一条靠着墙的回廊,另一边就是花园,从此看去,花园中一栋高楼十分威武. 
正是[我]级高手所住的天风楼.廊沿下的铁马在风中当当作响.向东有一间房间,  
是[扬]级武士的住所. 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wushi.c" : 1,
]));
  set("outdoors", "/d/xxy");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"zoulang2",
  "southeast" : __DIR__"zoulang",
  "east" : __DIR__"yangroom",
]));

  setup();
}
int valid_leave(object me,string dir)
{
    object ob;
    ob=present("pai",me);
    if (!ob&&dir=="east") return notify_fail("你不是等级武士，是怎样混进来的?\n");
    else
    return ::valid_leave(me,dir);
}
