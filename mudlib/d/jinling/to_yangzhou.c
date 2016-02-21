// Room: /d/jinling/to_yangzhou.c

inherit ROOM;

void create()
{
	set("short", "扬州道");
	set("long", @LONG
这条官道一直通向竞陵，竞陵是个小城市，但因为其地理位置的
特殊，历来是兵家必争之地。你看了一下，来往的人还挺多。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/yangzhou/dongmen",
  "east" : __DIR__"guandao7",
]));
	set("outdoors", "/d/jingling");

	setup();
	replace_program(ROOM);
}
