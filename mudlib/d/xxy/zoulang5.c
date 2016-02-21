// Room: /d/xxy/zoulang5.c

inherit ROOM;

void create()
{
	set("short", "走廊");
	set("long", @LONG
一条靠着墙的回廊,另一边就是花园,从此看去,花园中一栋高楼十分威武.
正是'我'级高手所住的天风楼.廊沿下的铁马在风中当当作响.向南可以进入花 
园,向北就是[武]字一号楼.
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"zoulang4",
  "northwest" : __DIR__"zoulang6",
  "south" : __DIR__"gardon2",
  "northup" : __DIR__"wuroom",
]));
	set("outdoors", "/d/xxy");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
