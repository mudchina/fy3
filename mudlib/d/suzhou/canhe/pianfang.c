// Room: /d/suzhou/canhe/pianfang.c

inherit ROOM;

void create()
{
	set("short", "偏房");
	set("long", @LONG
房间内满是灰尘，地上隐约有道脚印。屋的西面是两排书架，上面摆满了各
种书籍。东面一道门帘，里面好象有张床，也不知多久没人在这睡过了。正对面
的墙上则挂着几件兵刃。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"miru3",
]));
	set("objects",([
	__DIR__"npc/obj/book"+random(2):1,
	__DIR__"npc/obj/book"+random(2):1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
