// Room: /d/suzhou/qingshiru1.c

inherit ROOM;

void create()
{
	set("short", "青石路");
	set("long", @LONG
一条青石板铺成的路，比较宽敝。道路两旁种的都是垂杨柳，微风吹过沙沙
做响。由于这儿靠近苏州城，来往行人倒也不少。西北望去，隐约可见到塔影。
青石路南北延伸，南边就是苏州城。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"beipingmen",
		"north" :__DIR__"qingshiru2",
		"west" :__DIR__"guandao1",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
