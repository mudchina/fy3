//music yangzhou's 灵芝

#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("灵芝", ({ "lingzhi","ling","zhi" }) );
        set("long", "一种贵重药材。\n");
        set("unit", "支");
        set("weight", 50);
        set("value", 1000);
}

void init()
{
        add_action("do_eat", "eat");
}

int do_eat(string arg)
{
        object ob;
        if( !id(arg) ) return notify_fail("你要吃什麽？\n");

        ob=this_player();
        ob->add("max_gin",1);
        ob->set("gin",(int)ob->query("max_gin"));
        ob->set("eff_gin",(int)ob->query("max_gin"));
 
        ob->set("atman", (int)ob->query("max_atman"));
    
        write("[1;33m你吃了一支灵芝，感觉精力好多了。\n[0;37m");

        message("vision", HIY + ob->name() + 
"你吃了一支灵芝，看上去感觉精力好多了。\n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
