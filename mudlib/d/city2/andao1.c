
inherit ROOM;

void create()
{
	set("short", "天地会暗道");
	set("long", @LONG
这是一条黑漆漆的地道，曲曲折折地通向前方。两边都是
土墙，隐约可以听到上面脚底落地的声音。空气中弥漫着潮湿
的泥土气息，令人感到十分凉爽。一个道人站在这里，守卫着
上面的两个出口。
LONG );
	set("exits", ([
		"enter":__DIR__"dating",
		"eastup" : __DIR__"neishi",
		"westup" : __DIR__"guancai2",
	]));
	set("objects", ([
		CLASS_D("yunlong") + "/xuanzhen" : 1
	]));
//	set("no_clean_up", 0);
	setup();
}

int valid_leave(object me, string dir)
{
	string banghui;
	object ob;

	banghui=(string)me->query("banghui");
	ob=present("xuan zhen",this_object());

	if((!banghui || banghui!="天地会")&&objectp(ob)&&dir=="enter")
	return notify_fail("玄真道长一伸手拦住你道:此乃天地会重地,禁止入内!\n");
	return ::valid_leave(me,dir);
}
