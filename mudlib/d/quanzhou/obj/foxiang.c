
inherit ITEM;
void create()
{
	set_name("卢舍那佛神像", ({"foxiang", "shenxiang"}));
	set_weight(50000);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("long", "宝像庄严的神像,看来栩栩如生,十分传神。\n");
		set("unit", "个");
             set("no_get",1);
	}
setup();
}
