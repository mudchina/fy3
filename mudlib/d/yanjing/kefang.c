// Room: /d/yanjing/kefang
inherit ROOM;

void create()
{
  set ("short", "客房");
  set ("long", @LONG
一张桌子靠着窗户,一条腿还用砖头垫着,床上的帐子是粗麻布作的,打
了几个补丁,边脚的地方都变黑了,屋角的低洼中积了一些水,一股难闻的味道
熏得你只想跑出去.
LONG);

set("sleep_room",1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"tianjin",
]));
  setup();
  replace_program(ROOM);
}
