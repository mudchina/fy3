// Room: /d/quanzhou/estreet2.c

inherit ROOM;

void create()
{
	set("short", "东街");
	set("long", @LONG
东街是泉州府最热闹的一条街道.路上不时有满载着货物的车辆来
往,两边的店铺不断,向南是泉州最大的妈祖庙.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"estreet1",
  "east" : __DIR__"dongmen",
  "south" : __DIR__"mazhu",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
