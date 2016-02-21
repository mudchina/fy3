// Room: /u/uuui/xuedao/xuedao89.c

inherit ROOM;

void create()
{
	set("short", "池塘");
	set("long", @LONG
走到这里，树丛中出现一片池塘。池水碧绿宁静，水
面上飘浮着星星点点的小浮萍。在池塘的一角，还开着
两朵莲花，一丝丝清凉的风从池塘上吹过来，你觉得自
己的心也变得从容而安静了。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xuedao90",
  "west" : __DIR__"xuedao88",
]));

	setup();
	replace_program(ROOM);
}
