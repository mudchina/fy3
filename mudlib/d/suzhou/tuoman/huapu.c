// Room: /d/suzhou/tuoman/huapu.c

inherit ROOM;

void create()
{
	set("short", "花圃");
	set("long", @LONG
这里种植着各种山茶，都是“曼陀”山庄的主人费尽心思从各地网罗而来的，
其中不少珍品，只可惜种法不当，早已失去名家本色。你看了只有暗自叹息而已。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west":__DIR__"lukou",
		"east":__DIR__"shenchu",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
