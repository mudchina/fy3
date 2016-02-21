// Room: /d/huanggon/kangwangfu.c

inherit ROOM;

void create()
{
	set("short", "康亲王府");
	set("long", @LONG
康亲王是正红旗主,代善大贝勒的嫡派子孙，铁帽子王,不过受了熬拜
的挤压,在朝中很不得势,不过到底是一旗之主,王府建造得富丽堂皇,很有
些气势.两个家丁在角门边闲散的看门.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jiading.c" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tingyuan",
  "south" : __DIR__"wchangan",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");

	setup();
}
int valid_leave(object ob,string dir)
{
  if (ob->query_skill("literate",1)<60&&ob->query("combat_exp")<200000) {
  if (present("jia ding",this_object())&&dir=="north") 
    return notify_fail("王府家丁对你道:你文武两不成,还想见王爷么.\n");
   }
 return ::valid_leave(ob,dir);
 }