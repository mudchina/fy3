// Room: /d/huanggon/shenwumen.c

inherit ROOM;

void create()
{
	set("short", "神武门");
	set("long", @LONG
神武门是紫禁城的北门,出了此门就是景山.神武门高大雄壮,三扇
金钉的朱红大门并列,门之上就是城楼,上面一块竖匾,写着神武门三字,
南边是钦安殿.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/huanggonshiwei.c" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"qingandian",
  "north" : __DIR__"guangchang1",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
}
int valid_leave(object ob,string dir)
{
   if (!ob->query_temp("huanggon/enter")&&dir=="south") {
 if (ob->query("gender")!="中性"&&present("shi wei",this_object())) 
{   if (ob->query("xxy/lvl")<4)
   return notify_fail("皇宫侍卫拦住了你:皇宫也是随便可进的!\n");
}
   }
 return ::valid_leave(ob,dir);
 }
   		
