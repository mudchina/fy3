// 

inherit ITEM;

void create()
{
	set_name("《招架防御下卷》",({"zhaojiaxia","xia"}));
        set_weight(100);
        set("unit", "本");
        set("long",
	 "一本记载格斗防御术的武学书籍。\n"
             );
	set("value",3000);
        set("skill", ([
	"name":"parry",
        "exp_required":10000,
        "max_skill":60,
        "sen_cost":30,
        ]) );
}
 
