// Room: /d/huanggon/xidan2
inherit ROOM;

void create()
{
  set ("short", "西单");
  set ("long", @LONG
西单是居民区,只有些走街穿巷的小贩摇着货鼓四处走,多数的居民
家都关着门,道两边就是高高的墙壁.西边是条东西向的街道,那就是西长
安街了,来往的人挺多.
LONG);

  set("outdoors", "/d/huanggon");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"wchangan",
  "north" : __DIR__"xidan",
  "south" : __DIR__"xidan1",
]));
  setup();
  replace_program(ROOM);
}
