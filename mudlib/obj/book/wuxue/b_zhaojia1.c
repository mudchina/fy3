// 

inherit ITEM;

void create()
{
	set_name("《招架防御上卷》",({"zhaojiashang","shang"}));
        set_weight(100);
        set("unit", "本");
        set("long",
	"一本记载格斗防御术的武学书籍。\n"
             );
	set("value",1000);
        set("skill", ([
	"name":"parry",
        "exp_required":100,
        "max_skill":20,
        "sen_cost":10,
        ]) );
}
 
