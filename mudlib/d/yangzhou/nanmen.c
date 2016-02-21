// Room: /u/swordman/yangzhou/nanmen.c

inherit ROOM;

void create ()
{
  set ("short", "南城门");
  set ("long", @LONG
这是南城门，城墙被当成了广告牌，贴满了花花绿绿各行各业的广告， 
官兵们被近处的欢声笑语所吸引，似乎不是很认真在执勤。一条笔直的青
石板大道向南北两边延伸。
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing" : 3,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"nandaj3",
  "south" : __DIR__"yzroad",
]));
  set("outdoors", "/u/swordman");

  setup();
}
