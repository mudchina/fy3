// 

inherit ITEM;

void create()
{
        set_name("《巫师们的话》", ({"wizard book","wizard", "wiz" }));
        set_weight(100);
        set("unit", "本");
        set("long",
                
                "关于WIZARD的书，有兴趣的话可读(read)一读.\n"
             );
        set("value", 10);
        set("skill", ([
                "name":                 "throwing",         
                "exp_required": 0,                             
                "sen_cost":     20,                            
                "difficulty":   20,     
// modify is gin_cost's (difficulty - int)*5%
                "max_skill":    4 
        ]) );
}
 
void init()
{
	add_action("do_read", "read");
}


int do_read(string arg)
{
	this_player()->start_more(read_file(__DIR__"story/wizard.mud"));
	return 1;
}
