// Room: /d/huanggon/houtang.c

inherit ROOM;

void create()
{
	set("short", "后堂");
	set("long", @LONG
推开长窗,就是后堂,大厅正中设着灵堂,桌上点燃着八根极粗的蓝
色蜡烛,灵堂旁挂着几条白布挽联,竖着招魂幡子,暗绿色的烛光在墙壁
上晃出一道道影子,大厅中呆了许多人.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guanfuzi.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yuanzi",
]));

	setup();
	replace_program(ROOM);
}
