// 

inherit ITEM;

void create()
{
        set_name("《老子》", ({"laozi", "lao zi" }));
        set_weight(100);
        set("unit", "本");
        set("long",
                "上乘道学经典，一定要读一读.\n"
             );
        set("value", 3000);
        set("skill", ([
                "name": "daoxuexinde",
                "max_skill":    60 
        ]) );
}
 
