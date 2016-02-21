// Room: /d/new/huanhua/road2.c

inherit ROOM;

void create()
{
	set("short", "陡峭山道");
	set("long", @LONG
这是从悬崖边开出的陡峭山道,两边是高耸的山石,上面沾满了片片  
青苔,脚下的石阶坎坷不平,看来很少有人来到.山道依山势而建,只能看  
到数步远的地方,前面有个转弯.  
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"lshanguan",
  "northdown" : __DIR__"road3",
]));
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
