// Room: /d/tianxia/1dongku2
inherit ROOM;

void create()
{
  set ("short", "看守室");
  set ("long", @LONG
一张七倒八歪的木桌旁围拢了五六个人，呼喝着赌两小钱，一边地上
倒了几个空酒瓶。几把鬼头刀和几条鞭子胡乱扔在旁边的木床上。从木桌
上透出的一点光线朦胧照着这个石室.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"1dongku",
]));
  setup();
  replace_program(ROOM);
}
