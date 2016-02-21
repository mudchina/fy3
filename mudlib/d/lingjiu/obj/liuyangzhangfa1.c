inherit ITEM;

void create()
{
	set_name( "天山六阳掌法图上册", ({ "zhangfa tu", "tu" }));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
		set("long", "这是六阳掌法上册，上面画着一些纷繁复杂的招式及修练法门。\n");
		set("value", 500);
		set("material", "paper");
		set("skill", ([
			"name":	"liuyang-zhang",	
			"exp_required":	10000,	// minimum combat experience required
			"sen_cost":15+random(16),
			"max_skill":	30,
		]) );
	}
}
