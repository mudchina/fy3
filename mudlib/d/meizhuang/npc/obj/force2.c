// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("玄天内功下卷",({"neigong","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
	set("long","黄钟公所书玄天内功下卷。\n");
	set("no_give",1);
		set("material", "paper");
	set("value",100);
	set("no_sell",1);
		set("skill", ([
	"name":"xuantian-neigong",
	"exp_required":10000,
	"max_skill":60,
	"sen_cost":30,
		]) );
	}
}
