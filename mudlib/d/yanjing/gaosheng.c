// Room: /d/yanjing/gaosheng.c

inherit ROOM;

void create()
{
	set("short", "高升客栈");
	set("long", @LONG
两盏大红灯笼高挂在檐头两侧,正中的门檐下"高升客栈"的牌匾黑底
金字,牌匾下两扇黑漆大门边伙计站着迎客.一边的角门直接通向后院的
车马棚.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"street2",
  "west" : __DIR__"zoudao",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/yanjing");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiaoer.c" : 1,
]));

	setup();
}
int valid_leave(object me,string dir)
{
   object ob;

   ob=present("gao jianli",this_object());
   if (dir=="west" && ob && !me->query_temp("rent_paid"))
	return notify_fail("高渐离道：住店的话要给我(give)二两纹银，同帮弟兄只要一半吧。\n");
   if ( dir=="east" && me->query_temp("rent_paid"))	me->delete_temp("rent_paid");
   return ::valid_leave(me,dir);
}