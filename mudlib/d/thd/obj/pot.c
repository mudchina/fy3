// pot.c
// 97.7.14 by Aug

inherit ITEM;

void create()
{
	object water;

	set_name("大水缸", ({ "pot" }));
//	set_max_encumbrance(180000);
	set("long", "一个装满清水的大水缸，如果你口渴，可以舀水来喝(drink)。\n");
	set("no_get", 1);
//	set("liquid_container", 1);
	setup();
/*
	if( clonep() ) {
		water = new("/obj/water");
		water->set_volume(100000);
		water->move(this_object());
	}
*/
}

/*
int accept_object(object me, object ob) { return 1; }

void reset()
{
object water;

if( water = present("water", this_object()) ) {
water->set_volume(100000);
}
}
*/
