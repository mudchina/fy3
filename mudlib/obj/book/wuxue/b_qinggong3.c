// 

inherit ITEM;

void create()
{
	set_name("《轻功图解下卷》",({"qinggongxia","xia"}));
        set_weight(100);
        set("unit", "本");
        set("long",
	"一本记载躲闪纵跃的武学书籍。\n"
             );
	set("value",3000);
        set("skill", ([
	"name":"dodge",
        "exp_required":10000,
        "max_skill":60,
        "sen_cost":30,
        ]) );
}
 
