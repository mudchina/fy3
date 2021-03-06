// kedian1.c

inherit ROOM;

void create()
{
	set("short", "客店");
	set("long", @LONG
	这是一家价钱低廉的客栈，生意非常兴隆。外地游客多选择这里落脚，你
可以在这里打听到各地的风土人情。店小二里里外外忙得团团转，接待着南腔北调
的客人。客店的主人从不露面，他究竟是谁，有各种各样的猜测。墙上挂着一个牌
子(paizi)。
LONG
	);

	set("valid_startroom", 1);
        set("no_sleep_room",1);

	set("item_desc", ([
		"paizi" : "楼上雅房，每夜二两白银。\n",
	]));

	set("objects", ([
		__DIR__"npc/xiaoer1" : 1,
	]));

	set("exits", ([
		"south" : __DIR__"dongjie",
		"up" : __DIR__"kedian2",
	]));

	setup();
}

int valid_leave(object me,string dir)
{
   object ob;

   ob=present("wang xiaoer",this_object());
   if (dir=="up" && ob && !me->query_temp("rent_paid"))
        return notify_fail("王小二道：住店的话要给我(give)二两纹银，同帮弟兄只要一半吧。\n");
   if ( dir=="south" && me->query_temp("rent_paid"))     me->delete_temp("rent_paid");
   return ::valid_leave(me,dir);
}
