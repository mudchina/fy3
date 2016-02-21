// Room: /d/new/huanhua/road1.c

inherit ROOM;

void create()
{
	set("short", "陡峭山道");
	set("long", @LONG
这是从悬崖边开出的陡峭山道,两边是高耸的山石,上面沾满了片片 
青苔,时有一两条蜈蚣之类的爬虫在山石上掠过.山道很是陡峭,稍不留心 
就会失足掉下去,你可要小心了. 
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/butou.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "southup" : __DIR__"road3",
  "northdown" : __DIR__"dloushan",
]));

	setup();
	replace_program(ROOM);
}
