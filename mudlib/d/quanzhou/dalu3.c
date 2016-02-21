// Room: /d/quanzhou/dalu3.c

inherit ROOM;

void create()
{
	set("short", "大路");
	set("long", @LONG
一条宽阔笔直的大路,路边是一片片民居,道路至此开始分岔,大路
开始向东南拐过,而另一条小路向东北而去.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"wuliqiao",
  "northeast" : __DIR__"xiaolu",
  "west" : __DIR__"dalu2",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
