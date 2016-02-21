// Room: /d/hangzhou/xiaolu1.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
这条小路长满了野草,旁边的林木森森,一路深向后山.东北面的山
脚林木下露出围墙的一角.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"xiaolu",
  "southup" : __DIR__"nanping",
]));

	setup();
	replace_program(ROOM);
}
