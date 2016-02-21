// Room: /u/uuui/xuedao/xuedao0.c

inherit ROOM;

void create()
{
	set("short", "空地");
	set("long", @LONG
这里已经离血刀门不远了，似乎一切都很平静。但
总让你感觉不那么自在。时不时有血刀门的弟子疾步走
过，面上均无任何表情，偶尔会有人斜眼冷冷的瞟你一
眼，让你觉得浑身凉嗖嗖的。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xuedao1",
  "west" : __DIR__"xuedao5",
]));

	setup();
	replace_program(ROOM);
}
