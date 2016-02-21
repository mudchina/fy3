// Room: /d/kaifeng/jiaolou2.c

inherit ROOM;

void create()
{
	set("short", "东角楼");
	set("long", @LONG
角楼是平是驻兵来守望的地方。只在楼的顶端挂了个气死风灯。
日夜有人值守。从此向西下是朱雀门，东下是东大街，你眺目远处。
湖泊，楼阁，真是大好江山。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"zhuque",
  "eastdown" : __DIR__"eroad2",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
