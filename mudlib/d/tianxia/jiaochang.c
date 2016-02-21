// Room: /d/tianxia/jiaochang
inherit ROOM;

void create()
{
  set ("short", "三分教场");
  set ("long", @LONG
这是片开阔的广场，正中的旗杆石是从昆仑山运来的白玉石制成的。
西面的草木中有一条小路。东北面的一条青石道隐隐露出一股杀气。北
面的石阶直通山顶。
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"shijie1",
  "northeast" : __DIR__"1path",
  "west" : __DIR__"1road",
  "south" : __DIR__"1guan3",
]));
  setup();
}
