// Room: /u/swordman/yangzhou/yzroad.c

inherit ROOM;

void create()
{
	set("short", "扬州大道");
	set("long", @LONG
你走在一条青石大道上，人来人往非常繁忙，不时地有人骑着马
匆匆而过。大道两旁有一些小货摊，似乎是一处集市。北边通向扬州
城。东南边是一条大道，从这里可以通往中州府。南边是去金陵的路。
LONG
	);
	set("light_up", 1);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"zzroad",
  "north" : __DIR__"nanmen",
  "south" : __DIR__"jlroad",
]));
	set("outdoors", "/u/swordman");

	setup();
	replace_program(ROOM);
}
