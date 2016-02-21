// Room: /u/swordman/yangzhou/to_jinling
inherit ROOM;

void create ()
{
  set ("short", "官道");
  set ("long", @LONG
四周是无边的荒野地，看不见人影，也听不到声音，象是到了另一
个世界。一阵空虚寂寞涌上心头，你不由的加快了步伐。向西远远望去
是一座古城。这条官道一直通向竞陵，竞陵是个小城市，但因为其地理
位置的特殊，历来是兵家必争之地。你看了一下，来往的人还挺多。
LONG);

  set("light_up", 1);
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"guandao",
  "west" : __DIR__"jiaowai",
]));

  setup();
}
