// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("高级心法口决",({"xinfa","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
		set("long","一本小册子，上面密密麻麻写满了运气的法门。\n");
	set("no_give",1);
		set("material", "paper");
		set("skill", ([
	"name" : "murongxinfa",
	"exp_required":10000,
	"max_skill":60,
	"sen_cost":30,
		]) );
	}
}
