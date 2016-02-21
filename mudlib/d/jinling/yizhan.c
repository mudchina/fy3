// Room: /d/jinling/yizhan.c

inherit ROOM;

void create()
{
	set("short", "驿站");
	set("long", @LONG
这里是官府所设的驿站，是供来往的路人休息之所。
往北是到江边渡口的一条小路，往南就是江南名城
“扬州”，东面则是重镇“竟陵”。
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  "/d/yanjing/npc/person.c" : 1,
  "/d/hangzhou/npc/man.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"guandao3",
  "south" : __DIR__"guandao4",
]));
	set("outdoors", "/d/jingling");

	setup();
	replace_program(ROOM);
}
