// Room: /d/xxy/zoulang6.c

inherit ROOM;

void create()
{
	set("short", "走廊");
	set("long", @LONG
一条靠着墙的回廊,另一边就是花园,从此看去,花园中一栋高楼十分威武.
正是'我'级高手所住的天风楼.廊沿下的铁马在风中当当作响.向西是[武]字二
号楼.北面是一条长长走道.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"zoudao",
  "southeast" : __DIR__"zoulang5",
  "westup" : __DIR__"wuroom1",
]));

	setup();
	replace_program(ROOM);
}
