// 

inherit ITEM;

void create()
{
        set_name("《性命圭旨》", ({"xingmingguizhi", "zhi" }));
        set_weight(100);
        set("unit", "本");
        set("long",
                "小乘道学经典，一定要读一读.\n"
             );
        set("value", 500);
        set("skill", ([
                "name": "daoxuexinde",
                "max_skill":    10 
        ]) );
}
 
