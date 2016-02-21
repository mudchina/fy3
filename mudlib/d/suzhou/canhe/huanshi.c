// Room: /d/suzhou/canhe/huanshi.c

inherit ROOM;

void create()
{
	set("short", "还施水阁");
	set("long", @LONG
这个小阁楼建于湖上，四面望去湖上烟波尽收于眼底。阁内角落中堆放着各
式兵器，几个脚印深陷地中，显是比拚内力时留下的。阁顶上有一些奇怪的图案，
似乎并非只是装饰。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"miru3",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
