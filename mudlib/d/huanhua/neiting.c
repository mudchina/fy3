// Room: /d/new/huanhua/neiting.c

inherit ROOM;

void create()
{
	set("short", "内厅");
	set("long", @LONG
内厅是萧家平时聚会之处,除了萧氏子弟以及至亲好友之外,即使
是浣花剑派弟子非召也不得入内.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiaofuren.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"houyuan",
  "south" : __DIR__"tianjin",
  "west" : __DIR__"7qulang4",
]));

	setup();
	replace_program(ROOM);
}
