
inherit ITEM;
void create()
{
	set_name("大油缸", ({"yougang", "gang"}));
	set_weight(50000);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("long", "一只装满了灯油的大缸,是城中的大户施舍的。\n");
		set("unit", "个");
             set("no_get",1);
		set("value", 250);
		set("max_liquid", 100);
	}
setup();
}
