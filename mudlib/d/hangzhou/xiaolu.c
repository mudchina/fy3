// Room: /d/hangzhou/xiaolu.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
这是园后的一条小路,路边长满了野草.一直深向后山的林木中去.
时能看到各类小野兽从道旁突然蹿出来.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"huagang",
  "southwest" : __DIR__"xiaolu1",
]));

	setup();
	replace_program(ROOM);
}
