//  book <baima> 

inherit ITEM;

void create()
{
        set_name("《妙法莲花经》", ({"jing"}));
        set_weight(600);
        set("unit", "本");
        set("long","佛门经典.\n");
        set("value", 100);
        set("skill", ([
                "name":                 "literate",         
                "exp_required": 100,                             
                "sen_cost":    10,                            
                "difficulty":   20,     
// modify is gin_cost's (difficulty - int)*5%
                "max_skill":    30 
        ]) );
}

