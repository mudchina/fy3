  // jiaozi.c 饺子
//2000.2.6 by panguan

#include <ansi.h>

inherit ITEM;

void create()
{
         set_name(HIG"千禧饺子"NOR, ({ "jiaozi" }) );
        set("long",
  HIG"千禧饺子是txjh巫师组参照宫廷秘方，采集七十二种珍贵药材，费时十八年
炼制而成的灵药。习武之人服用后不但能增加一甲子的功力,武学境界也能得到提高。\n"NOR);
          set("unit", "个");
        set("weight", 50);
        set("value", 10000);
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
         if ((int)ob->query_temp("liwu2000")==1)
{
           message_vision("突然$N身后有人发出一阵阴笑：大过年的你不怕撑死呀？\n", ob);
        return 0;
}
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("gin",(int)ob->query("max_gin"));
        ob->set("sen",(int)ob->query("max_sen"));
        ob->set("eff_kee",(int)ob->query("max_kee"));
        ob->set("eff_gin",(int)ob->query("max_gin"));
        ob->set("eff_sen",(int)ob->query("max_sen"));
           ob->set_temp("liwu2000",1);

          ob->set("food",800);
          ob->set("water",800);
            ob->add("max_force",100);
          ob->add("wgjn",200000);
       write(HIR+"你趁着没人注意，偷偷摸出千禧饺子，迫不及待吞了下去，顿然间只觉
  一股浩荡无比的真气直冲顶门,急忙盘膝而坐，闭目运功...

 你的武功技能增加了２０００００点  !!!  内力增加了１００点 !!!　n"NOR);

        message("vision", HIG + ob->name() + 
"偷偷摸出千禧饺子，迫不及待吞了下去，顿然间只觉一股浩荡无比的真气直冲顶门,
急忙盘膝而坐，闭目运功...n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
