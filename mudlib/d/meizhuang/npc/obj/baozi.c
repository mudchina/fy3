// music yangzhou' 包子

inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("包子", ({"baozi", "dumpling"}));
	set_weight(80);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("long", "一个富春的三丁包子。\n");
		set("unit", "个");
		set("value", 50);
		set("food_remaining", 3);
		set("food_supply", 30);
	}
}
