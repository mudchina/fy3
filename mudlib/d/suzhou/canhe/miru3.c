// Room: /d/suzhou/canhe/miru3.c

inherit ROOM;

void create()
{
	set("short", "密道");
	set("long", @LONG
你四处张望了一下，但见此处依山傍水，端的是个好地方。水香、花香混杂
在一起，让你觉得似乎身处梦中一般。“叽叽”的鸟叫声才把你拉回到现实之中。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"in" :__DIR__"miru2",
		"north" :__DIR__"pianfang",
		"east" :__DIR__"huanshi",
		"south" :__DIR__"huayuan",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
