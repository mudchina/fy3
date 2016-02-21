// Room: /u/yuki/room/xiaoyuan.c

inherit ROOM;

void create()
{
	set("short", "小院");
	set("long", @LONG
这是一座看起来非常普通的小小的院落，院子的中间建着一间
小屋，小屋也很普通，就是用茅草为顶，砖土为墙，院子里没有什
么摆设，只有几堆干木柴放在角落里，里面就是柴房了。 
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xiaochaifang",
  "southwest" : "/d/meizhuang/chuangongfang3",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
