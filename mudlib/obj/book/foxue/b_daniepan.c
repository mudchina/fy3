// 

inherit ITEM;

void create()
{
        set_name("《大涅盘经》", ({"daniepanjing", "jing" }));
        set_weight(100);
        set("unit", "本");
        set("long",
                "小乘佛学经典，一定要读一读.\n"
             );
        set("value", 500);
        set("skill", ([
                "name": "foxuexinde",
                "max_skill":    10 
        ]) );
}
 
