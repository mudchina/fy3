// Room: /d/suzhou/tuoman/shenchu.c

inherit ROOM;

void create()
{
	set("short", "山庄深处");
	set("long", @LONG
你避开阳光，只往树荫深处行去，转过一座小山，只听得溪水淙淙，左首
一排绿灯，四下里甚是幽静。该地在山丘之阴，日光照射不到，正是种茶花的
好地方。
LONG
	);
	set("objects",([
		__DIR__"npc/wangyuyan":1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"west":__DIR__"huapu",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
