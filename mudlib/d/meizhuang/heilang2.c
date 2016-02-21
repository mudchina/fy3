// Room: /d/suzhou/meizhuang/heilang1.c

inherit ROOM;

void create()
{
	set("short", "回廊");
	set("long", @LONG
一条四周梅树环绕的走廊。头顶上是由琉璃青瓦铺盖而成的廊檐，可
遮风蔽雨。两侧梅树随风轻摆，不时送来阵阵清香。西边梅林之中似乎有
间居屋。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west":__DIR__"chuangongfang1",
	"east":__DIR__"heilang1",
	"north":__DIR__"heilang3",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
