// Room: /d/tianxia/unarmed
inherit ROOM;

void create()
{
  set ("short", "拳室");
  set ("long", @LONG
这个石室中最令人注目的是室中间的两个木桩，上面突起许多小的
木桩，是用来锻炼拳脚的。一面的墙壁上挂了些拳谱，北面的墙壁上
一个老大的洞，看来是被人打出来的。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"1guan7",
]));
  setup();
}
