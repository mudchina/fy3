// music  yangzhou's 盐水鹅

inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("盐水鹅", ({ "yanshuie", "yanshui","e" }) );
	set_weight(600);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一只盐水鹅。\n");
		set("unit", "只");
		set("value", 200);
		set("food_remaining", 20);
		set("food_supply", 100);
		set("material", "bone");
	}
	setup();
}

//int finish_eat()
//{
//	if( !query("weapon_prop") ) return 0;
//	set_name("啃得精光的鸡腿骨头", ({ "bone" }) );
//	set_weight(150);
//	set("long", "一根啃得精光的鸡腿骨头。\n");
//	return 1;
//}
