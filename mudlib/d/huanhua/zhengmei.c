// Room: /d/new/huanhua/zhengmei.c

inherit ROOM;

void create()
{
	set("short", "振眉阁");
	set("long", @LONG
这“振眉阁”原本是萧西楼办事、读书、练剑、筹划之地,阁分两层, 
你只见一道红色小楼梯通向上层. 
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"path4.c",
  "up" : __DIR__"upzhengmei",
]));

	setup();
	replace_program(ROOM);
}
