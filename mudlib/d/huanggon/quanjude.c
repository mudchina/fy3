// Room: /d/huanggon/quanjude.c

inherit ROOM;

void create()
{
	set("short", "全聚德酒楼");
	set("long", @LONG
全聚德酒楼在方圆数百里之内可称得上无人不知,尤其是该店的烤鸭
乃是京中一绝,店铺装饰得简洁大方,几十只烤好的鸭子还往下滴着香油.东
边就是王府井大街.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jingqianlin.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wangfujing",
]));

	setup();
	replace_program(ROOM);
}
