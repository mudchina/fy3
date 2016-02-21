// huanhun.c 九转还魂丹
// 97.9.6  by Aug

#include <ansi.h>

inherit ITEM;

void create()
{
	set_name(HIY"九转还魂丹"NOR, ({ "huanhun","dan" }) );
	set("long",
HIY"这是一枚有起死回生之效的九转还魂丹，是可遇而不可求的仙家之药。\n"NOR);
	set("unit", "粒");
	set("weight", 50);
	set("value", 0);
}

void init()
{
	add_action("do_eat", "eat");
}

int do_eat(string arg)
{
	object ob;
	mapping skl;
	string *sname;
	int i;

	if( !id(arg) ) return notify_fail("你要吃什麽？\n");

	seteuid(getuid());

	ob=this_player();

	skl = ob->query_skills();

	if(!sizeof(skl)) return 1;

	sname = sort_array( keys(skl), (: strcmp :) );

	for(i=0; i<sizeof(skl); i++) 
	{
		ob->set_skill( sname[i] , skl[sname[i]]+1 );
	}

	if(ob->query("age")>=15)
		ob->set("combat_exp",(int)ob->query("combat_exp")/98*100);
// a-a/50=b  a=b/0.98

	write(HIY+"你拿出一粒九转还魂丹，放入口中，吞了下去，顿时有一种灵魂归体的感觉。\n"NOR);

	message("vision", HIY + ob->name() + HIY+
"拿出一粒九转还魂丹，放入口中，吞了下去，顿时有一种灵魂归体的感觉。\n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
