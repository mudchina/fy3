// Room: /d/hangzhou/bibo.c

inherit ROOM;

void create()
{
	set("short", "碧波桥");
	set("long", @LONG
这座半圆形的石拱桥横卧水面,用巨大的麻石堆垒而成,靠近水面的石
壁上掌满了青苔,水波荡漾中,直使人怀疑桥动抑或水动.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"baidi1",
  "south" : __DIR__"liulang",
]));
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}
