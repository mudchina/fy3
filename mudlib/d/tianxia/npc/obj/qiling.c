#include <ansi.h>
inherit ITEM;

void create()
{
	set_name(RED"÷è÷ëÊ¯µñ"NOR, ({ "shidiao" , "xiang"}) );
	set_weight(500000);
	set("no_get",1);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "×ğ");
		set("long", "ºìÉ«Âêè§µñ¿Ì¶ø³ÉµÄ÷è÷ëÊ¯µñ£¬ÌŞÍ¸Ááçç.\n");
		set("value", 1);
             set("no_drop",1);
             set("no_put",1);
		set("material", "stone");
	}
setup();
}
