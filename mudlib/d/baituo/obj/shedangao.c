// shedangao.c
inherit ITEM;
void init()
{
	add_action("do_eat", "eat");
}

void create()
{
	set_name("蛇胆膏", ({"shedan gao", "gao"}));
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "块");
		set("long", "这是珍贵补品『蛇胆膏』。\n");
		set("value", 100);
	}
	setup();
}

int do_eat(string arg)
{
	object me = this_player();
	if( !living(me))	return 0;
	if (!id(arg))
		return notify_fail("你要吃什么？\n");
	if((me->query("max_atman")>=110)||(me->query("max_force")>=200)
	|| (me->query("max_mana")>=110))
		return notify_fail("你吃『蛇胆膏』已无效用！\n");
	me->add("max_atman",2);
	me->add("max_force",5);
	me->add("max_mana",2);
	message_vision( "$N吃下一块蛇胆膏，顿觉一股浩荡真气直涌上来，
	精气神大增...\n" , me);
	destruct(this_object());
	return 1;
}