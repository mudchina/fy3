// huyao.c

#include <armor.h>

inherit ARMOR;

void create()
{
	set_name("金丝甲",({"jinsi jia","jia"}));
	set_weight(500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","件");
		set("long","金光闪闪，煞是好看的金丝甲。\n");
	set("value",5000);
		set("material","armor");
		set("armor_prop/armor", 10);
	}
	setup();
}
