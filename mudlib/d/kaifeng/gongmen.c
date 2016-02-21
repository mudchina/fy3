// Room: /d/kaifeng/gongmen.c

inherit ROOM;

void create()
{
	set("short", "石拱门");
	set("long", @LONG
用石头搭起来的一个拱门，高越两丈，上面镂刻云纹。两边是拴马
的石柱。再前边一点的地方，有旗杆石，那是两块巨大的石头，一
半埋到地下，在和口的地方，有个大孔，可以插旗杆。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southup" : __DIR__"8bao",
  "northdown" : __DIR__"road",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
