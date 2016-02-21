// thd:jiuyin1.c
// 97.7.14 by Aug

inherit ITEM;

void create()
{
	set_name("九阴真经上卷", ({ "jiuyin jing1","jing1" }) );
	set_weight(100);
	if( !clonep() ) {
		set("unit", "本");
		set("value", 10000);
		set("long", "这是本武学奇书。\n");
	}
	setup();
}

string valid_study(object me, string arg)
{
	if ( me->query_skill("literate") < 1 )	{
		notify_fail("你还是先去多识几个字吧。\n");
		return;
	}
	if ( me->query_skill("force", 1) >49 ) {
		notify_fail("这样东西对你而言，实在是太肤浅了。\n");
		return;
	}

	write("你睁大眼睛，细细地阅读「九阴真经上卷」上的说明。\n");

	return "force";
}
