// 

inherit ITEM;

void create()
{
        set_name("《楞严经》", ({"lengyanjing", "jing" }));
        set_weight(100);
        set("unit", "本");
        set("long",
                "中乘佛学经典，一定要读一读.\n"
             );
        set("value", 1500);
        set("skill", ([
                "name": "foxuexinde",
                "age" : 14,         
                "max_skill":    30 
        ]) );
}
 
