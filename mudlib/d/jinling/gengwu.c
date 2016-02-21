// Room: /u/cyj/room/gengwu
inherit ROOM;

void create()
{
  set ("short", "更屋");
  set ("long", @LONG
 这是一座毫不起眼的小屋，住着一个打更的老头。屋里很简陋，除了几样必备
的生活用品外，再无其它惹眼的东西。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "northwest" : __DIR__"changjie.c",
]));
  set("outdoors", "/u/cyj/room");
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/gengfu.c" : 1,
]));
  setup();
}
