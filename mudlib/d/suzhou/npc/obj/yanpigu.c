// box.c 功德箱

#include <ansi.h>

inherit ITEM;
void create()
{
	set_name("烟屁股",({"yanpigu"}));
	set_weight(1);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("unit","个");
	set("long","一个已被抽完的烟屁股。\n");
		set("material", "wood");
	}
	setup();
}


