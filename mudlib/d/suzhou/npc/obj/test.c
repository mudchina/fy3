// box.c 功德箱

#include <ansi.h>

inherit ITEM;
void create()
{
	object yan;
	set_name("香烟壳",({"xiangyanke"}));
	set_weight(30);
	set_encumbrance(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("unit","个");
	 set("long","一个香烟壳，里面可以装得下20支烟。\n");
		set("material", "wood");
	}
	setup();
}


