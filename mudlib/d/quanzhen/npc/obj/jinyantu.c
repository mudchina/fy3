// jinyantu.c 金雁图谱


#include <ansi.h>
inherit ITEM;
 
void create()
{
        set_name(HIC"金雁图谱" NOR, ({ "jinyan tu","tu", }));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
             set("unit", "本");
             set("long",
        "这是本很普通的书，书里面好象有一些小人飞舞的图形。\n",
         );
         set("value", 0);
         set("material", "paper");
         set("skill", ([
			"name":		"jinyan-gong",
   			"exp_required" : 10000,
			"sen_cost":	25,
                        "max_skill":  60
                ]) );
        }
}
