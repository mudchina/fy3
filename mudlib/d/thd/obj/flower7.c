// flower7.c

inherit ITEM;

void create()
{
	set_name("金蛇菊", ({ "jinshe ju" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "朵");
		set("value", 0);
		set("long", 
"这是朵金黄色的菊花，据说是来自天竺的异种。\n");
	}
	setup();
}
