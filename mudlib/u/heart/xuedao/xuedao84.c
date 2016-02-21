// Room: /u/uuui/xuedao/xuedao84.c

inherit ROOM;

void create()
{
	set("short", "土丘");
	set("long", @LONG
这里是灌木从尽头，一个小土丘出现在你的面前。登
上土丘向下看去，周围就是一片树林了。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"xuedao83",
  "south" : __DIR__"xuedao85",
  "east" : __DIR__"xuedao87",
  "west" : __DIR__"xuedao82",
]));

	setup();
	replace_program(ROOM);
}
