// Mr.music yangzhou 飞镖

#include <weapon.h>

inherit THROWING;
void create()
{
		set_name("竹钉",({"zhuding","ding"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
			set("long","青竹制成的钉子，攻击力不强，似乎是个古董。\n上面密密麻麻的不知写着些什么。\n");
			set("unit","些");
			set("base_unit","枚");
			set("base_weight",5);
			set("base_value",5000);
			set("value",50000);
			set("skill",([
				"name" :"throwing",
				"exp_required":0,
				"sen_cost":20,
				"max_skill":50,
			]));
              }
		set_amount(10);
        init_throwing(5);
        setup();
}
