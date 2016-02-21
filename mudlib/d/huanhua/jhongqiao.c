// Room: /d/new/huanhua/jhongqiao.c

inherit ROOM;

void create()
{
	set("short", "霁虹桥");
	set("long", @LONG
桥如彩虹,横跨南明河,桥下流水清清,远处青山隐隐,南面
一座楼阁飞檐拱柱,气度不凡.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"jhongqiao1",
  "southup" : __DIR__"jxiulou",
]));

	setup();
	replace_program(ROOM);
}
