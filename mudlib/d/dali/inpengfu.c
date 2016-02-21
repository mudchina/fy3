// Room: /d/dali/inpengfu.c

inherit ROOM;

void create()
{
	set("short", "丐帮大理分舵");
	set("long", @LONG
进门是个大院子,两边种上两棵高大的梧桐树,院中也不见人来往.
向里面看,显然还有很多房屋,几个人围坐在院中的水井边,吃着冰镇
的荔枝,商讨着什么.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/gaibang/liang.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"pengfu",
]));
	set("outdoors", "/d/dali");

	setup();
	replace_program(ROOM);
}
