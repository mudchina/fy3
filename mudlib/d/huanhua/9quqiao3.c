// Room: /d/new/huanhua/9quqiao3.c

inherit ROOM;

void create()
{
	set("short", "九曲桥");
	set("long", @LONG
浣花溪上九曲桥,是一座弯弯曲曲的小石桥,上面装上了扶栏,可以依栏
赏鱼观花,向南去是长江剑室.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"9quqiao2",
  "north" : __DIR__"huanghe",
]));

	setup();
	replace_program(ROOM);
}
