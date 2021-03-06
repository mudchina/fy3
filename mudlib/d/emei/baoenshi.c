// Room: /u/xxy/room/baoenshi.c

inherit ROOM;

void create()
{
	set("short", "报恩寺");
	set("long", @LONG
创建于明代万历年间的报恩寺,是峨眉山八大名寺之一,据说,这
个寺名是康熙皇帝取佛经中'四恩'之一的'报国主恩'之意而名,寺门
的两边有一幅对联(lian),看来很长.
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/emei");
	set("item_desc", ([ /* sizeof() == 1 */
  "lian" : "海拔越三千,高凌五岳,碧障苍峦......
峥嵘逾万纪,秀绝瀛寰,霞披彩错......
",
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"gate",
  "north" : __DIR__"huizong",
]));

	setup();
	replace_program(ROOM);
}
