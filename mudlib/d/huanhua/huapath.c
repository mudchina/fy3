// Room: /d/huanhua/huapath.c

inherit ROOM;

void create()
{
	set("short", "花径");
	set("long", @LONG
一条细小石子铺就的小路,虽然并不宽阔,但打扫得十分干净,给人
小巧玲珑的感觉,向北有一座大厅.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"jianlu",
  "north" : __DIR__"huapath1",
]));

	setup();
	replace_program(ROOM);
}
