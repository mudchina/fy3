// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("金塔像",({"xiang"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","樽");
		set("long","一樽铜质镀金塔像，估计价值连城。\n");
		set("value",50000);
		set("material","gold");
	}
}
