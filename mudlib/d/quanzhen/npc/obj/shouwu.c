// shouwu.c 何首乌


inherit ITEM;
#include <ansi.h>

void init()
{
        add_action("do_eat", "eat");
}

void create()
{
	set_name(WHT"何首乌"NOR, ({"shouwu"}));
        set_weight(800);
        set("unit", "支");
	set("long", "这是一支已成人形的何首乌，看来可以入药。\n");
        setup();
}

int do_eat(string arg)
{
	object me=this_player();

	if( ! living(me))	return 0;
	if (!(arg))  return notify_fail("你要吃什么？\n");
	if(arg=="shouwu") 
	{
		if ((int)me->query("max_mana")<=200)	{
			write("你吃下了一支何首乌，只觉得精神健旺之极。\n");
			me->add("max_mana",10);
			me->add("mana",10);
		}
		else {
			write("你吃下了一支何首乌，但是好象没什么用。\n");		
		}
		destruct(this_object());
		me->unconcious();
	}
	return 1;
}
