// flower8.c

inherit ITEM;

void create()
{
	set_name("青陀螺", ({ "qing tuoluo" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "朵");
		set("value", 0);
		set("long", 
"这是朵极为罕见的青陀螺花，据说是来自西域的异种。\n");
	}
	setup();
}
