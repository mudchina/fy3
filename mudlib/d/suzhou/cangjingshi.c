// Room: /d/suzhou/cangjingshi.c

inherit ROOM;

void create()
{
	set("short", "藏经室");
	set("long", @LONG
报恩寺的藏经室，这儿摆放了不少基本武学的书籍。不少好武青年都慕名前
来，想一饱眼福。当然这儿的书是不允许随便带出去的。一个小和尚站在你眼前，
对着你微微一笑。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"baoensi",
]));
	set("objects",([
		__DIR__"obj/cangjinggui":1,
		__DIR__"npc/xiaoheshang":1,
]));
	set("no_clean_up", 0);
	set("no_fight",1);
	set("no_steal",1);
	setup();
}
int valid_leave(object me,string dir)
{
	object *inv;
	int i;
	inv=all_inventory(me);
	if(!sizeof(inv))    return ::valid_leave(me,dir);
	for(i=0;i<sizeof(inv);i++)	{
		if(inv[i]->query("oldsix_flag/no_out")==1)
		return notify_fail("小和尚说道：这本"+inv[i]->query("name")+"你不能带走。\n");
	}
	return ::valid_leave(me,dir);
}
