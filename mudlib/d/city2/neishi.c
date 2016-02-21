//neishi.c

inherit ROOM;

void create()
{
	set("short", "内室");
	set("long",
	     "\n这里是一个空荡荡的房间，除了地板(floor)，什么也没有。\n"
	);
	set("exits", ([
		"east" : __DIR__"huichunt",
		"westdown":__DIR__"andao1",
	]));
	set("item_desc", ([
		"floor" : "\n地板全是木制的，上面积了些灰尘，不过有一块木板很干净。\n" ,
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}
