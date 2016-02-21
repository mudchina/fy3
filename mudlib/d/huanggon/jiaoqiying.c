// Room: /d/huanggon/jiaoqiying.c

inherit ROOM;

void create()
{
	set("short", "骁骑营");
	set("long", @LONG
骁骑营是京师内三军之一,辅助提督府治理京师附近的区域.营内老大
一个马厩,养了几百匹良马,骁骑营的统领察尔珠是满人,极得皇上信赖.北
面是人来人往的东大街.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/chaerzhu.c" : 1,
  __DIR__"npc/xiaoqiying.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"edajie",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
