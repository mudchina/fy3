// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 

inherit ITEM;

void create()
{
        set_name("胭脂碧波瓠", ({ "bibo hai" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "只");
                set("long", "碧绿的瓷壁上留着点点胭脂红,乃是磁中绝品。\n");
                set("value", 1500);
        }
}


