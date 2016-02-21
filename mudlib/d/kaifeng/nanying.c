// Room: /d/kaifeng/nanying.c

inherit ROOM;

void create()
{
	set("short", "南盈门");
	set("long", @LONG
南盈门是开封城的南门，由于开封府尹治理有方，开封境内很是平
安。出城不远就是禹王台。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guanbing.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"jiedao2",
  "south" : __DIR__"dadao",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
