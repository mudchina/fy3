// Room: /d/huanggon/tingyuan.c

inherit ROOM;

void create()
{
	set("short", "王府庭院");
	set("long", @LONG
宽阔的庭院,一条直道通向北面的大厅,两边是花木葱郁的花园,来往
的丫鬟仆妇匆匆而过.南边就是大门,平常时候只开角门,中门紧闭.从庭
院深处传来一些呼喊声.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"majiu",
  "south" : __DIR__"kangwangfu",
  "north" : __DIR__"kangdating",
  "west" : __DIR__"gardon",
]));

	setup();
	replace_program(ROOM);
}
