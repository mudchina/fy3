inherit ITEM;

void create()
{
        set_name("银牌", ({"pai", "yin pai"}));
        set_weight(400);
        if (clonep())
                set_default_object(__FILE__);
    else  {
           set("unit", "块");
           set("long", "一块圆形银牌，上面还雕着花，写着字．\n");
           set("value",2); 
           set("no_sell", 1);
           set("no_get",1);
                    set("no_drop",1);
        }
}
