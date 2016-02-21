// Room: /d/new/huanhua/lshanguan.c

inherit ROOM;

void create()
{
	set("short", "娄山关");
	set("long", @LONG
大娄山上娄山关,是川黔间要隘,此关依山而建,上下山道之间,直有
一夫当关,万夫莫开之势.抬头上望,一条山道直穿向云层中去.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"road2",
  "southup" : __DIR__"road4",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
