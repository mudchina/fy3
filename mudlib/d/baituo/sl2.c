// Room: /d/baituo/sl1.c

inherit ROOM;

void create()
{
	set("short", "山路");
	set("long", @LONG
这儿人烟稀少，西边通过大漠可至白驼山。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "southeast" :__DIR__"guandao1",
  "northwest":__DIR__"sl1",
]));
	set("outdoors", "baituo");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
