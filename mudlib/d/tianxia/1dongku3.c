// Room: /d/tianxia/1dongku3
inherit ROOM;

void create()
{
  set ("short", "行刑室");
  set ("long", @LONG
地上是点点的血迹，室周挂满了千奇百怪的刑具，正中的铁炉中炉火正
旺，烧着几把烙铁。旁边的木柱上挂了几个铁环，上面还飘着几缕人的头发。
墙角落的大水缸中缓缓游动着几条蛇。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"1dongku",
]));
  setup();
  replace_program(ROOM);
}
