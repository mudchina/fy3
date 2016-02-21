// dou_peng.c
// 97.7.14 by Aug

#include <armor.h>

inherit F_CLOTH;

void create()
{
	set_name("斗篷", ({ "dou peng" }) );
	set_weight(1500);
	setup_cloth();

	if( !clonep() ) {
		set("unit", "件");
		set("value", 1000);
		set("long", "一件用上好的缎料制成的大色斗篷。\n");
		set("wear_as", "cloth");
		set("apply_armor/cloth", ([
			"armor": 5,
		]));
	}

	setup();
}
