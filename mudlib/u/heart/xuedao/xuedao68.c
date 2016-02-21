// Room: /u/uuui/xuedao/xuedao68.c

inherit ROOM;

void create()
{
	set("short", "碎石小路");
	set("long", @LONG
再往北面走就到了石牢，碎石铺成的小路，已经磨
的十分光滑。看样子血刀门的门规很是严格。这里唯一
与别的地方不同的是。路的两旁长满了又高又密的杂草
隐约中你能看到一些白骨。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"xuedao67",
  "northwest" : __DIR__"xuedao69",
]));

	setup();
	replace_program(ROOM);
}
