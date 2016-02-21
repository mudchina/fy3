// Room: /d/hangzhou/dalu.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "大路");
	set("long", @LONG
一条宽阔的大道,来往的人络绎不绝,扬起一路的风尘.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"dalu2",
  "west" : __DIR__"dongmen",
]));

	setup();
	replace_program(ROOM);
}
