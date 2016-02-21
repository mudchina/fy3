// Room: /d/new/huanhua/upzhengmei.c

inherit ROOM;

void create()
{
	set("short", "振眉阁二层");
	set("long", @LONG
里面很阔，四壁有字画，橱中有书，设备虽简，但有一股大气魄，
阁内中央，有几张捕木桌椅.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/oldwoman.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"zhengmei",
]));

	setup();
	replace_program(ROOM);
}
