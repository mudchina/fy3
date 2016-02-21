#include <ansi.h>
inherit ITEM;

void create()
{
	set_name(RED"½õ"NOR+GRN"É«"NOR+YEL"Óð"NOR+MAG"Ã«"NOR, ({ "yu mao" }) );
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "É«²Ê°ßìµµÄÓðÃ«.\n");
		set("unit", "Óð");
		set("value", 1000);

	}
}
