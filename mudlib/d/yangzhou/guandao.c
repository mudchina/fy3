// Room: /u/swordman/yangzhou/guandao
inherit ROOM;

void create ()
{
  set ("short", "官道");
  set ("long", @LONG
这是一条由官府铺设的道路，非常宽阔，可容八马并驱。
是南北交通要道。行人明显多了，不时还有骑马的和赶车的
经过。
LONG);

  set("light_up", 1);
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"to_jinling",
  "southeast" : __DIR__"guandao1",
]));

  setup();
}
