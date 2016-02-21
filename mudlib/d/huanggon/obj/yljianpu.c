inherit ITEM;

void create()
{
	set_name("云龙剑谱",({"jian pu","pu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
		set("long","这是本由陈近南编写的云龙剑法图解。\n");
		set("value",2500);
		set("material", "paper");
		set("skill", ([
			"name":"yunlong-jianfa",
                        "exp_required": 50000, // minimum combat experience required
			"sen_cost": 20+random(21),
			"max_skill":60,
		]) );
	}
}
