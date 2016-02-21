inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("ËâÄà°×ÇĞÈâ", ({"rou"}));
	set_weight(1200);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "Åè");
		set("value", 100);
		set("food_remaining", 5);
		set("food_supply", 30);
	}
}
