// Room: /d/tianxia/1guan6
inherit ROOM;

void create()
{
  set ("short", "帮众住处");
  set ("long", @LONG
一排高大的瓦房，相互间有走道相通，这是帮中弟子的住处，也是
他们平常习练武功的地方,门口两边两块巨石，遮住了南北两面的通路。
南边的石上一根旗杆高约五丈。却什么都没挂。
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"1guan7",
  "west" : __DIR__"1guan3",
]));
  setup();
}
