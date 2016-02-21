#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("牧笛", ({ "mudi", "dizi" }) );
	set_weight(2000);

	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
		set("unit", "支");
		set("long", "翠竹所成，天然妙韵，尾端还带有一段竹叶.\n");
		set("value", 500);		
		set("material", "wood");
	}
	init_sword(5);

	set("wield_msg", "$N抽出一把$n,带起一阵笛声。\n");
	set("unwield_msg", "$N把$n插到腰间。\n");

	setup();
}
