// Room: /u/oldsix/room1/taihu1.c

inherit ROOM;

void create()
{
	set("short", "太湖");
	set("long", @LONG
舟行湖上，几个转折，便转入了一座大湖之中，极目望去，但见烟波浩渺，
远水接天。想到自已不会水性，不由得暗暗心惊。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
}
int init()
{
	object me;
	me=this_player();
	me->set_temp("oldsix_flag/ab",1);
	call_out("greeting",5,me);
}
void greeting(object me)
{
	me->move(__DIR__"taihu2.c");
}
