// Room: /d/quanzhou/xiaolu.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
一条小路,两边是参天的古树,排列得非常整齐,微风吹过,树叶唰唰 
作响,远处传来牧童的笛声 
LONG
	);
	set("no_clean_up", 0);
	set("no_cleanup", 1);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mutong.c" : 1,
  __DIR__"npc/shuiniu.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"dalu3",
  "north" : __DIR__"caodi",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
