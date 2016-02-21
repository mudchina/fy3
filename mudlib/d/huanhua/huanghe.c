// Room: /d/new/huanhua/huanghe.c

inherit ROOM;

void create()
{
	set("short", "黄河小轩");
	set("long", @LONG
黄河小轩就座落于园中的池塘之中,九曲栏桥之间,小小的敞轩三面临水.
轩中摆有油漆小木桌,四方小锦墩.临潭观鱼,水波涤荡.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"9quqiao4",
  "south" : __DIR__"9quqiao3",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
