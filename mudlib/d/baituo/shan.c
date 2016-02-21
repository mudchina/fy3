// Room: /d/baituo/shan.c

inherit ROOM;

void create()
{
	set("short", "山路");
	set("long", @LONG
一条上山的路，凉风吹的你有点哆嗦。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"shan1",
  "southdown" : __DIR__"xiaolu4",
]));

	setup();
	replace_program(ROOM);
}
