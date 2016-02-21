// Room: /d/kaifeng/eroad.c

inherit ROOM;

void create()
{
	set("short", "东大街");
	set("long", @LONG
东大街是开封府内东街区的主要通道。道路两端店铺府第不断。行
人如缕，观光的，作生意的，攀交情的，走亲访友的，喧闹无比。南边
一个小角门内似乎是个小菜园子。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"jiaomen",
  "north" : __DIR__"eroad1",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
