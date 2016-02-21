// box.c 功德箱

#include <ansi.h>

inherit ITEM;
string* food=({
	"jitui",
	"baozi",
	"baicai",
	"rou",
});
string* water=({
	"jiuhu",
	"jiudai",
	"chahu",
});
void create()
{
	int i;
	object thing;
	set_name("厨架",({"chujia"}));
	set_weight(3000);
	set_max_encumbrance(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "个");
	set("long","厨房内放置吃喝的小柜子。\n");
		set("material", "wood");
		set("no_get",1);
		set("no_drop",1);
	}
	setup();
	for(i=0;i<4;i++)	{
	thing=new("/d/meizhuang/npc/obj/"+food[random(4)]+".c");
	thing->set("no_sell",1);
	thing->move(this_object());
	}
	for(i=0;i<3;i++)	{
	thing=new("/d/meizhuang/npc/obj/"+water[random(3)]+".c");
	thing->set("no_sell",1);
	thing->move(this_object());
	}
}

int is_container() { return 1; }

