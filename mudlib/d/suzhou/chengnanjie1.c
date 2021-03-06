// Room: /d/suzhou/chengnanjie1.c

inherit ROOM;

void create()
{
	set("short", "城南街");
	set("long", @LONG
城南也是相当热闹的地方。东边一条小巷，进进出出都是些衣冠楚楚的有钱
公子哥，巷内比较昏暗，看不清有些什么。西面是苏州城内的有名客栈“悦来客
栈”。街道向南延伸，北面是中央广场。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"taijiannong1",
		"north" :__DIR__"chengzhong",
		"south" :__DIR__"chengnanjie2",
		"west" :__DIR__"kezhan",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
