// 

inherit ITEM;

void create()
{
	set_name("《剑术指南下卷》",({"jianshuxia","xia"}));
        set_weight(100);
        set("unit", "本");
        set("long",
	"一本记载剑法招式的武学书籍。\n"
             );
	set("value",3000);
        set("skill", ([
	"name":"sword",
        "exp_required":10000,
        "max_skill":60,
        "sen_cost":30,
        ]) );
}
 
