// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("初级拳法口决",({"quanfa","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
	set("long","一本小册子，上面密密麻麻写满了拳术的法门。\n");
	set("no_give",1);
		set("material", "paper");
		set("skill", ([
	"name" :"murongquanfa",
	"exp_required":100,
	"max_skill":20,
	"sen_cost":10,
		]) );
	}
}
