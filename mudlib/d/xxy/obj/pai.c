inherit ITEM;

void create()
{
        set_name("铜牌", ({"pai", "tong pai"}));
        set_weight(100);
        if (clonep())
                set_default_object(__FILE__);
    else  {
           set("unit", "个");
           set("long", "一个小铜牌，上面还雕着花，写着字．\n");
           set("value",2); 
           set("no_sell", 1);
           set("no_get",1);
                    set("no_drop",1);
        }
}
