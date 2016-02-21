inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("ĞûÍş»ğÍÈ", ({"xuanwei huotui"}));
	set_weight(1200);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "Åè");
		set("value", 200);
		set("food_remaining", 6);
		set("food_supply", 30);
	}
}
