// Room: /d/huanggon/echangan.c

inherit ROOM;

void create()
{
	set("short", "东长安街");
	set("long", @LONG
长安街东西走向,是京师繁华之地,道上行人,商贩,游客,艺人来往不
绝,街道的北边是条小胡同,就是甜水井胡同,好象这几天经常看到有带刀
剑的武林人出入.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"zhaomuchu",
  "west" : __DIR__"wangfujing1",
  "east" : __DIR__"echangan1",
  "north" : __DIR__"tianwell",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
