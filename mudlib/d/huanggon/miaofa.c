// Room: /d/huanggon/miaofa.c

inherit ROOM;

void create()
{
	set("short", "妙法莲花寺");
	set("long", @LONG
妙法莲花寺在南大街的西侧,因为寺中长老佛法精湛,满人又重佛轻
道,所以这寺庙的香火一向很旺盛.寺中菩萨金身慈祥,你如果要学佛法的
话,可以向寺中长老请教.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yulin.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"sdajie",
]));

	setup();
}
int valid_leave(object ob,string dir)
{
   if (ob->query_temp("mark/玉林")&&dir=="east")
 ob->delete_temp("mark/玉林");
  return ::valid_leave(ob,dir);
}