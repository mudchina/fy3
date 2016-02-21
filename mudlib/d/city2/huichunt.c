// Room: /city2/huichuntang.c

inherit ROOM;

void create()
{
	set("short", "回春堂药店");
	set("long", @LONG
这是一家药铺，一股浓浓的药味让你几欲窒息，那是从药柜上的
几百个小抽屉里散发出来的。一位老者在柜台后站着。柜台上贴着一
张发黄的广告(guanggao)。柜台后面往西是一间内室(neishi)。
LONG );
	set("item_desc", ([
		"guanggao" : "本店出售以下药品：
金创药：\t五十两白银
其他神药与老板面议。\n",
	]));
	set("objects", ([
		"/d/city2/npc/huoji2" : 1,
		"/d/city2/npc/xutianch" : 1,
	]));
	set("exits", ([
		"north" : __DIR__"xichang1",
                "west" : __DIR__"neishi",   
	]));
//	set("no_clean_up", 0);
	setup();
}
int valid_leave(object me,string dir)
{
	string banghui;
	object ob;

	banghui=(string)me->query("banghui");
	ob=present("xu tianchuan",this_object());
	if(banghui && banghui!="天地会" && dir=="west" && objectp(ob))
	return notify_fail("徐天川挡在你面前道："+
	RANK_D->query_respect(me)+"何以要进西屋？\n");
	return ::valid_leave(me,dir);
}


