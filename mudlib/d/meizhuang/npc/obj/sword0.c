// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("七弦无形剑法上卷",({"jianfa","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
	set("long","黄钟公所书剑法指南。\n");
	set("no_give",1);
		set("material", "paper");
	set("value",100);
	set("no_sell",1);
		set("skill", ([
	"name":"qixianwuxing-jian",
	"exp_required":100,
	"max_skill":20,
	"sen_cost":10,
		]) );
	}
}
