// Room: /d/huashan/square.c

inherit ROOM;

void create()
{
	set("short", "练武场");
	set("long", @LONG
这里是华山派的练武场，场上立这几个木人，东边是兵器库，西边是
个小店。通常有许多华山派弟子在此习武练剑。北边的房屋门上挂着一块
匾，上书「群仙观」，西北方似乎有条小道通往山上。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xx");
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"bingqifang",
  "north" : __DIR__"qunxianguan",
  "south" : __DIR__"yunu",
  "northwest" : __DIR__"chaopath1",
]));

	setup();
	replace_program(ROOM);
}
