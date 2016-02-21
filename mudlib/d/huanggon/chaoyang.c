// Room: /d/huanggon/chaoyang.c

inherit ROOM;

void create()
{
	set("short", "朝阳观");
	set("long", @LONG
京中朝阳观位于朝阳门之侧,是座破落的道观,据说始建于明洪武年
间,现在已经破落了,道观中的道人多已还俗,更有许多直接当了和尚,剩
下的也都是为人画符驱邪,你可以在此学习道学心得.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/longhu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"echangan1",
]));

	setup();
	replace_program(ROOM);
}
int valid_leave(object ob,string dir)
{
   if (ob->query_temp("mark/龙虎")&&dir=="east")
 ob->delete_temp("mark/龙虎");
  return ::valid_leave(ob,dir);
}