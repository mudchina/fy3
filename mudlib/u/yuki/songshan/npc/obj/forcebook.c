inherit ITEM;

void create()
{
        set_name("《心法秘芨》",({"forcebook","force"}));
        set_weight(100);
        set("unit", "本");
        set("long",
         "一本书页都发黄了的心法秘芨。\n"
             );
        set("value",3000);
        set("skill", ([
        "name":"force",
        "exp_required":10000,
        "max_skill":80,
        "sen_cost":30,
        ]) );
}

