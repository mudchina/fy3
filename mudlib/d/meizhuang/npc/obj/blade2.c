// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("泼墨披麻刀法下卷",({"daofa","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
	set("long","丹青生所著的刀法指南。\n");
	set("no_give",1);
		set("material", "paper");
	set("value",100);
	set("no_sell",1);
		set("skill", ([
	"name":"pomopima-dao",
	"exp_required":10000,
	"max_skill":60,
	"sen_cost":30,
		]) );
	}
}
