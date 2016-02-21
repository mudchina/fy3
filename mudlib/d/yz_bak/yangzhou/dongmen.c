// Room: /d/yangzhou/dongmen.c

inherit ROOM;

void create()
{
	set("short", "东门");
	set("long", @LONG
	这儿就是扬州城的东门，因近来扬州城郊常有盗匪出没，不太安全，
所以一到晚上，城门就会关闭。

LONG
	);
	set("outdoors", "/d/yangzhou");
	set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing.c" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"jiedao3",
  "east" : "/d/jinling/to_yangzhou",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
