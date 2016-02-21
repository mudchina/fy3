// baicai.c
// 97.7.14 by Aug

inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("ôä´ä°×²Ë", ({ "baicai" }) );
	set_weight(150);
	if( clonep() ) 
		set_default_object(__FILE__);
	else 
	{
		set("unit", "ÅÌ");
		set("value", 10);
		set("food_remaining", 3);
		set("food_supply", 30);
		set("long", "Ò»ÅÌË®¾§°ã¾§Ó¨ÌÞÍ¸µÄ°×²Ë¡£\n");
	}
	setup();
}

