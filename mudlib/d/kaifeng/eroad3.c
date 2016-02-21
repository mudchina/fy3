// Room: /d/kaifeng/eroad3.c

inherit ROOM;

void create()
{
	set("short", "东大街");
	set("long", @LONG
东大街是开封府内东街区的主要通道。道路两端店铺府第不断。行
人如缕，观光的，作生意的，攀交情的，走亲访友的，喧闹无比。南边
不远就是山陕甘会馆。西面是开封铁塔。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"eroad2",
  "west" : __DIR__"tieta",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
