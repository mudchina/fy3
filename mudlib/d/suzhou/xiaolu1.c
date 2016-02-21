// Room: /d/suzhou/xiaolu1.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
你走在一条杂草丛生的小路上，路面上脚印重重叠叠可见来往之人着实不少。
抬头只见西北淡现出一座小山，山势雄奇如蹲虎状，想必就是天下闻名的“虎丘
山”了。山顶一座宝塔直插云宵，当是“虎丘塔”吧。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
]));
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"qingshiru2",
		"northwest" :__DIR__"huqiushanxia",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
