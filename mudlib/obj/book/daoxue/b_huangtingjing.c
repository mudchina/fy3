// 

inherit ITEM;

void create()
{
        set_name("《黄庭经》", ({"huangtingjing", "jing" }));
        set_weight(100);
        set("unit", "本");
        set("long",
                "中乘道学经典，一定要读一读.\n"
             );
        set("value", 1500);
        set("skill", ([
                "name": "daoxuexinde",
                "max_skill":    30 
        ]) );
}
 
