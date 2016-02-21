// Room: /d/baituo/guandao1.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这条道路上几乎见不到什么行人，你不由加快了步伐。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "southeast" :"/d/dali/todali",
  "northwest": __DIR__"guandao1",
]));
	set("outdoors", "baituo");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
