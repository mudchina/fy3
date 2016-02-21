// Room: /u/uuui/xuedao/xuedao97.c

inherit ROOM;

void create()
{
	set("short", "守卫室");
	set("long", @LONG
这里是血刀门的守卫室。看上去血刀门的守卫武功
都可以独当一面。他们时常出入屋子，但地上居然有一
层厚厚的尘土。上面没有半个脚印，不禁让人生畏。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/2");
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xuedao60",
]));

	setup();
	replace_program(ROOM);
}
