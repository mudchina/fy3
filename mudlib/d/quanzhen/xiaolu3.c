// xiaolu3.c 后山小路


inherit ROOM;

void create()
{
	set("short", "后山小路");
	set("long", @LONG
	这里是后山上的小路。这条小路好象不是人工刻意修出来的，
也许只是以前的采药人踩多了，现出这样一条小路来。走到这里，你
好象迷路了。
LONG
	);

	set("exits", ([
		"east" : __DIR__"xiaolu4",
		"west" : __DIR__"xiaolu2",
		"north":__FILE__,
		"south":__FILE__,
	]));

set("outdoors","/d/quanzhen");
	setup();
	replace_program(ROOM);
}

