// Room: /d/tianxia/1guan7
inherit ROOM;

void create()
{
  set ("short", "走廊");
  set ("long", @LONG
一条长长的室内走廊，两边是一个个的小房间，走廊的顶很高，因
为长的原因，阳光照不到里面，所以两边壁上隔不多远就有油灯点着。
从南边的房间中传出兵器碰击的声音
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"1guan8",
  "south" : __DIR__"sword",
  "north" : __DIR__"unarmed",
  "out" : __DIR__"1guan6",
]));
  setup();
}
