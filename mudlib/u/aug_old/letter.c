// letter.c

inherit ITEM;

void create()
{
	set_name("ÍÆ¼öĞÅ", ({ "letter" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "·â");
		set("value", 0);
		set("long", "\n");
		set("pl_name","");
	}
	setup();
}
