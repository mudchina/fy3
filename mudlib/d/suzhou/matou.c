// Room: /d/suzhou/matou.c

inherit ROOM;

void create()
{
	set("short", "码头");
	set("long", @LONG
码头上熙熙嚷嚷，热闹非常。年青力壮的搬运工、忙着向客人兜售杂货的
小贩、刚到此地的外乡客、准备去扬州打拚的青年人。最着忙的还得数船老大，
浑身上下早已湿透，也不知是汗水浸湿还是河水打湿。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"up" :__DIR__"wumenqiao",
]));
	set("objects",([
		__DIR__"npc/chuanlaoda" :1,
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
}
void init()
{
	object me;
	me=this_player();
	me->set_temp("yz_sz",0);
}
