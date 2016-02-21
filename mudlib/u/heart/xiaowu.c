// Room: /u/viviran/xiaowu.c

inherit ROOM;

void create()
{
	set("short", "侍卫室");
	set("long", @LONG
这里是凝王府的侍卫室。看上去凝王府的侍卫武功都
可以独当一面。他们时常出入屋子，但地上居然有一层厚
厚的尘土。上面没有半个脚印，不禁让人生畏。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"yingbi",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
