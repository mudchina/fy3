// 

inherit ITEM;

void create()
{
	set_name("《轻功图解中卷》",({"qinggongzhong","zhong"}));
        set_weight(100);
        set("unit", "本");
        set("long",
	"一本记载躲闪纵跃的武学书籍。\n"
             );
	set("value",2000);
        set("skill", ([
	"name":"dodge",
        "exp_required":5000,
        "max_skill":40,
        "sen_cost":20,
        ]) );
}
 
