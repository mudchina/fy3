// tieshou.c

#include <armor.h>

inherit "/std/weapon/unarmed.c";

void create()
{
	set_name("ÌúÊÖÌ×",({"tieshoutao","tie shoutao","shoutao"}));
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("material", "steel");
	set("value",5000);
	set("unit","Ë«");
	}
	init_unarmed(20);
	setup();
}
