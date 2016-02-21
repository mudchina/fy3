// turou.c

inherit F_FOOD;
inherit ITEM;

void create()
{
	set_name("∫Ï…’Õ√»‚" , ({"tu rou" , "rou" }));
        set_weight(300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long", "“ª÷ª…’øæµ√œ„œ„µƒÕ√»‚°£\n");
		set("unit", "÷ª");
		set("value", 50);
		set("food_remaining", 3);
		set("food_supply" , 80);
        }
    setup();
}

