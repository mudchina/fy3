// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 

inherit ITEM;

void create()
{
        set_name("白天目磁碗", ({ "ci wan" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "只");
                set("long", "纯白无瑕,薄如纸的上佳瓷器。\n");
                set("value", 500);
        }
}


