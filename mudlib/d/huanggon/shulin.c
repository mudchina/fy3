// Room: /d/huanggon/shulin.c

inherit ROOM;

void create()
{
	set("short", "树林");
	set("long", @LONG
这是片小树林,几只小鸟的枝头鸣叫,地上铺了一层落叶,上面有几个
脚印,看来刚有人经过,树林北面有栋庄院,因为你老远就能看到它门前高
挂的灯笼.南边是连接回族和京城的大道.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wyshanzhuang",
  "south" : "/d/huizhu/guandao4",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
