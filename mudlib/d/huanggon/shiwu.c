// Room: /d/huanggon/shiwu.c

inherit ROOM;
#include <room.h>
void create()
{
	set("short", "石牢");
	set("long", @LONG
这间屋子座落于后花园的西面,通体由巨大厚实的花岗岩垒成,正面是
两扇大铁门,看来没七八个人推不开,一把大锁把铁门锁死了.十多个卫士围
绕着石屋巡逻,这是康亲王府中关押重犯的石牢.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shilaokanshou.c" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"hougardon",
  "north" : __DIR__"shilaozoulang",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);
  create_door("north","石牢门");
	setup();
}

int valid_leave(object ob,string dir)
{
  if (present("kan shou",this_object())&&dir=="north") 
 return notify_fail("石牢看守嘿嘿一笑:想探监,没门.\n");
 return ::valid_leave(ob,dir);
}
