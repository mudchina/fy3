// Room: /d/new/huanhua/9quqiao2.c

inherit ROOM;

void create()
{
	set("short", "九曲桥");
	set("long", @LONG
浣花溪上九曲桥,是一座弯弯曲曲的小石桥,上面装上了扶栏,可以依栏
赏鱼观花,向南去是长江剑室.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yidong-mo.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"9quqiao1",
  "north" : __DIR__"9quqiao3",
]));

	setup();
	replace_program(ROOM);
}
