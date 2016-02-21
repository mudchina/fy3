// cloth.c
//
// This is the basic equip for players just login.

inherit ITEM;

void create()
{
	set_name("Ô¿³×",({"yaoshi"}));
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","°Ñ");
		set("material","iron");
		set("no_drop",1);
		set("no_get",1);
	}
	setup();
}
