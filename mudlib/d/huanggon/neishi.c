// Room: /d/huanggon/neishi.c

inherit ROOM;

void create()
{
	set("short", "内室");
	set("long", @LONG
房中放着一张大床,一张小床,有几只箱子靠着墙，一桌一柜，此外无
甚物件.东首放着一只大水缸,显得十分突兀,地下溅得湿了一大片.桌上放
着几十根蜡烛.窗子关得甚实,每一道窗缝都用绵纸糊住.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/emei/obj/pot.c" : 1,
]));
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "窗子" : "这窗子看来能打开(open window).
",
]));
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"dawu",
]));

	setup();
	replace_program(ROOM);
}
