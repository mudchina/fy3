//bing5.c 对堂饼
inherit ITEM;
#include <ansi.h>

void init()
{
	add_action("do_eat", "eat");
}

void create()
{
	set_name(YEL "对堂饼" NOR, ({"bing5", "duitangbing"}));
	set("unit", "个");
	set("no_get", 1);
/*
	set("no_drop", 1);
	set("no_put", 1);
	set("no_beg", 1);
	set("no_steal", 1);
*/
	set("long", "这是一个难出的对堂饼。\n");
	setup();
}

int do_eat(string arg)
{
	object me=this_player();
	if (!id(arg))  return notify_fail("你要吃什么？\n");
	if(arg=="bing5"||arg=="duitangbing")
	{
		me->add("combat_exp",868);
		me->add("potential",68);
		me->add("con",1);
		me->add("dex",1);
		message_vision(HIY "$N三口两口吃下一块$n。\n" NOR, this_player(), this_object());
		destruct(this_object());
	}
	return 1;
}
void owner_is_killed()
{
        destruct(this_object());
}
