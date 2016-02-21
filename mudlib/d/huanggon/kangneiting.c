// Room: /d/huanggon/kangneiting.c

inherit ROOM;

void create()
{
	set("short", "王府内厅");
	set("long", @LONG
内厅是康亲王招待亲朋好友,聚会的地方,厅中摆了两长溜的凳子,靠
着墙壁十多支高脚琉璃灯大放光明.七八个丫鬟端了盆碗往来穿梭.南边
是天井,北边儿就是后花园.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/kangqingwang.c" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"hougardon",
  "south" : __DIR__"tianjin",
  "west" : __DIR__"shufang",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
