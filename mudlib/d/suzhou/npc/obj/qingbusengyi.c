// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("�಼ɮ��",({"qingbu sengyi","sengyi","cloth"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("value",50);
		set("unit", "��");
		set("material", "cloth");
		set("armor_prop/armor", 5);
	}
	setup();
}
