// daodejing-ii.c

inherit ITEM;

void create()
{
	 set_name("满天星手法下篇",({"shoufa","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
	set("long","黑白子潜心专研的暗器手法指南。\n");
	set("no_give",1);
		set("material", "paper");
	set("value",100);
	set("no_sell",1);
		set("skill", ([
	"name":"mantianxing",
	"exp_required":10000,
	"max_skill":60,
	"sen_cost":30,
		]) );
	}
}
