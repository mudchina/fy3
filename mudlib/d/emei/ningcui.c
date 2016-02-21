// Room: /d/emei/ningcui.c

inherit ROOM;

void create()
{
	set("short", "凝翠楼");
	set("long", @LONG
这是一座小楼,全部用檀木制成,推开窗户,便是一大片竹林,竹叶
摇动,点点翠色透窗而进,所以楼以竹而名.楼前的庭院中,栽满了素梅
山茶.翘角飞檐,碧窗朱栏和终年迭翠,四季扬英融和在一起.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/fang.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"qifodian",
]));

	setup();
	replace_program(ROOM);
}
