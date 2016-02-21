// Room: /d/suzhou/meizhuang/tubiwengju.c

inherit ROOM;

void create()
{
	set("short", "秃笔翁居");
	set("long", @LONG
居室内挂满了名家的真迹，秃笔翁想必从此中悟出了不少招式。正对
面的墙壁上不知是哪位高人草书的“裴将军诗”，二十三个字笔笔精神饱
满，尤其那个“如”字直犹破壁飞去一般。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west":__DIR__"chuangongfang2",
]));
	set("objects",([
	__DIR__"npc/tubiweng":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
