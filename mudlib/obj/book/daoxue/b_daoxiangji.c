// 

inherit ITEM;

void create()
{
        set_name("《道乡集》", ({"daoxiangji", "ji" }));
        set_weight(100);
        set("unit", "本");
        set("long",
                "中乘道学经典，一定要读一读.\n"
             );
        set("value", 2000);
        set("skill", ([
                "name": "daoxuexinde",
                "max_skill":    40 
        ]) );
}
 
