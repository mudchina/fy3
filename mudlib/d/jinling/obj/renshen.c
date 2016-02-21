// music yangzhou's 人参

#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("人参",({"ren shen","shen"}));
	set("long","一种贵重的滋补药材，可以补充精气神。\n");
        set("unit", "段");
        set("weight", 50);
	set("value",3000);
}

void init()
{
        add_action("do_eat", "eat");
}

int do_eat(string arg)
{
        object ob;
	ob=this_player();
	if(!living(ob))	return 0;
        if( !id(arg) ) return notify_fail("你要吃什麽？\n");
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("eff_kee",(int)ob->query("max_kee"));
	ob->set("gin",(int)ob->query("max_gin"));
	ob->set("eff_gin",(int)ob->query("max_gin"));
	ob->set("sen",(int)ob->query("max_sen"));
	ob->set("eff_sen",(int)ob->query("max_sen"));

	message_vision("$N吃下了一段人参，长吸了一口气，感觉好多了。\n",ob);
        destruct(this_object());
        return 1;
}
