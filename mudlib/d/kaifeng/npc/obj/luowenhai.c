// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 

inherit ITEM;

void create()
{
        set_name("淡青螺纹醢", ({ "luowen hai" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "只");
                set("long", "淡青色,内外都有螺旋形的条纹。\n");
                set("value", 1000);
        }
}


