// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("三字经",({"sanzijing","sanzi jing","jing","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
		set("long","这是本广为流传的“三字经”书。\n");
		set("value", 500);
		set("material", "paper");
		set("skill", ([
			"name" :"literate",
			"sen_cost":10+random(11),
			"max_skill":45,
		]) );
	}
}
