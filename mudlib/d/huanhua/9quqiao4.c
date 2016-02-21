// Room: /d/new/huanhua/9quqiao4.c

inherit ROOM;

void create()
{
	set("short", "九曲桥");
	set("long", @LONG
浣花溪上九曲桥,是一座弯弯曲曲的小石桥,上面装上了扶栏,可以依栏
赏鱼观花,向南去是长江剑室.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"huanghe",
  "northwest" : __DIR__"xiaolu2",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
