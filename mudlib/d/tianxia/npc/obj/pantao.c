inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("蟠桃", ({ "pan tao" }) );
	set_weight(120);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一颗微微泛红的大蟠桃\n");
		set("unit", "颗");
		set("value", 1000);
                set("eat_msg","$N吃着$n,见别人都流着口水,心想:哪来这么多智障儿.\n");
		set("food_remaining",8);
		set("food_supply", 60);
	}
}
