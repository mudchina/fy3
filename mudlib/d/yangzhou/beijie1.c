// Room: /u/swordman/yangzhou/beijie1.c

inherit ROOM;

void create ()
{
  set ("short", "北大街");
  set ("long", @LONG
这里的路相当的宽，能容好几匹马车并行，长长的道路通向北方。
东边是城中的一座武馆。
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shangren" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"wuguan",
  "north" : __DIR__"beijie2",
  "south" : __DIR__"beijie",
]));
  set("outdoors", "/u/swordman");

  setup();
}
