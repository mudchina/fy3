// box.c 功德箱

#include <ansi.h>

inherit ITEM;
void create()
{
	object shu;
	set_name("小包的书柜",({"shugui","shu gui","gui"}));
	set_weight(3000);
	set_max_encumbrance(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "个");
	set("long","放了几本包不靓学武用的武学书籍。\n");
		set("material", "wood");
		set("no_get",1);
		set("no_drop",1);
	}
	setup();
	shu=new("/d/suzhou/npc/obj/force"+random(3)+".c");
	shu->move(this_object());
	shu=new("/d/suzhou/npc/obj/dodge"+random(3)+".c");
	shu->move(this_object());
	shu=new("/d/suzhou/npc/obj/unarmed"+random(3)+".c");
	shu->move(this_object());
}

int is_container() { return 1; }

