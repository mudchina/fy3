inherit ITEM;

void create()
{
        set_name("《嵩山剑法》",({"swordbook","sword"}));
        set_weight(100);
        set("unit", "本");
        set("long",
         "一本记载着有关嵩山剑法招式的武功秘芨。\n"
             );
        set("value",3000);
        set("skill", ([
        "name":"songshanjian",
        "exp_required":10000,
        "max_skill":60,
        "sen_cost":30,
        ]) );
}

