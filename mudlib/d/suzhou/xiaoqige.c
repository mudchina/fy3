// Room: /d/suzhou/woshi.c

inherit ROOM;

void create()
{
	set("short","小栖阁");
	set("long", @LONG
阁楼内安静的很。西首处并排着三四张床，正对面的香炉内紫烟缭绕。烟香
扑面而来，熏得你昏昏欲睡。不远处站立着一青衣小童，似乎准备服侍你休息。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"down" :__DIR__"jinfengzhuang",
]));
	set("objects",([
		__DIR__"npc/xiaotong":1,
]));
	set("no_fight",1);
	set("sleep_room",1);
	setup();
	replace_program(ROOM);
}
