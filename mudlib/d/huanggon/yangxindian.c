// Room: /d/huanggon/yangxindian.c

inherit ROOM;

void create()
{
	set("short", "养心殿");
	set("long", @LONG
养心殿是皇上日常休息的地方,高大的殿堂,华丽的井藻,朱红的巨
大柱子,处处形成一种威严的气势.南北两边是漆成红色的长窗.此地向
东不远就是乾清宫.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"shangshufang",
  "east" : __DIR__"qianqingon",
]));

	setup();
}
int valid_leave(object me,string dir)
{
if (dir=="east"&&me->query("xxy/lvl")<4)
return notify_fail("你刚想踱向乾清宫，就被守殿侍卫挡住了!\n");
return ::valid_leave(me,dir);
}
