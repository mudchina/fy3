// Room: /d/new/tianxia/room9.c

inherit ROOM;

void create ()
{
  set ("short", "石室");
  set ("long", @LONG
一个四四方方的石室,四边的石壁打磨得光滑无比.洞中光影流动,不知道
是从哪透进来的.天顶石壁上不知谁用手指划了一行字:[入此门来,即是有缘].
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/gongji.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"danger9",
]));

  setup();
}
