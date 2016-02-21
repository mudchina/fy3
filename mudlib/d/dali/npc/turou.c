// turou.c Ò°ÍÃÈâ by ksusan 8/03/97 8:45

inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("ÍÃÈâ", ({ "turou" }) );
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "Ò»¿éÏÊÑªÁÜÀìµÄÒ°ÍÃÈâ£¬¶ö¼±ÁËÉú³ÔÎ¶µÀ²»»µ¡£\n");
		set("unit", "¿é");
		set("value", 15);
		set("food_remaining", 3);
		set("food_supply", 60);
	}
}
