// Room: /d/jinling/doufudian.c

inherit ROOM;

void create()
{
	set("short", "豆腐店");
	set("long", @LONG
哇！好多人喔！你放眼看去，只见门口排了好长一条队伍。再抬头一看
上面高高的挂着一块匾额,写着“清水豆腐”。哦！原来!
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"changjie5.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yanniang.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
