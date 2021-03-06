// Room: /d/taiwan/tingtang.c

inherit ROOM;

void create()
{
	set("short", "厅堂");
	set("long", @LONG
一个小厅堂,看来是招待客人的地方,虽然因为没人打扫,到处铺上了 
厚厚的一层灰尘.但各类家具摆放得一丝不乱.东面有扇门虚掩着. 
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "up" : __DIR__"room2",
  "south" : __DIR__"xiaolou",
  "east" : __DIR__"room1",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/zongwuwei.c" : 1,
  __DIR__"obj/xiao_table.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
