// flower4.c

inherit ITEM;

void create()
{
	set_name("旱地莲", ({ "lianhua" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "朵");
		set("value", 0);
		set("long", 
"这是朵美丽的生长在陆地上的莲花。\n");
	}
	setup();
}
