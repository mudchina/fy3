inherit ITEM;

void create()
{
        set_name("血渍情书", ({ "paper" }));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "本");
                set("long",
                        
"这是一张用鲜血血写的示爱的文字，字体古怪。隐有深意！\n"
                );
                set("value", 260);
                set("material", "paper");
                set("skill", ([
                        "name":     "liangqing-xiangyi",  
                    "exp_required": 100,  
                        "sen_cost":  30, 
                      "difficulty":  20,        
                    "max_skill":  41 ,
                                                                               
                ]) );
        }
}

