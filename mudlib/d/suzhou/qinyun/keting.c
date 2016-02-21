// Room: /u/oldsix/room1/keting.c

inherit ROOM;

void create()
{
	set("short", "客厅");
	set("long", @LONG
你走入厅内，迎面是个绿色门帘。掀帘进去，但见四周景物，无一不透出江
南水乡的秀美灵气。不由得放轻了脚步，生怕破坏了这儿的气氛。
    往北是听雨居，南面则是大门。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"ru2",
		"north" :__DIR__"ru3",
]));
	set("objects",([
		__DIR__"npc/napu" :1,
		__DIR__"npc/nupu" :1,
		]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
