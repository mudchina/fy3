// Room: /d/new/huanhua/road7.c

inherit ROOM;

void create()
{
	set("short", "陡峭山道");
	set("long", @LONG
沿山道而下,两边山壁渐为靠拢,石阶也因此而变得狭窄起来.前方  
不远,两块巨石分别从山壁的两边倒下,却在正中相拒而不下,鬼斧神工  
,令人叹为观止.  
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/black_man.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "northup" : __DIR__"road6",
]));
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
