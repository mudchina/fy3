// 

inherit ITEM;

void create()
{
	set_name("《剑术指南中卷》",({"jianshuzhong","zhong"}));
        set_weight(100);
        set("unit", "本");
        set("long",
	"一本记载剑法招式的武学书籍。\n"
             );
	set("value",2000);
        set("skill", ([
	"name":"sword",
        "exp_required":5000,
        "max_skill":40,
        "sen_cost":20,
        ]) );
}
 
