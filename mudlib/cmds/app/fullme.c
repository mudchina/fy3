inherit F_CLEAN_UP;
#include <ansi.h>;

string *gifts=({ "gin","kee","sen" });
string *gifts1=({"atman","force","mana"});

int main(object me, string str)
{
    int i;
    object obj;

    if( !str || str == "")
        obj = me;
     else if ( str != me->query("id"))
         return notify_fail("你只可以恢复自己!\n");
   if( str == me->query("id")) obj = me;
    
    for( i = 0; i < sizeof(gifts); i++ )
    {
        obj->set(gifts[i],obj->query("max_"+gifts[i]));
        obj->set("eff_"+gifts[i],obj->query("max_"+gifts[i]));
    }
    for( i = 0; i < sizeof(gifts1); i++ )
    {
        obj->set(gifts1[i],obj->query("max_"+gifts1[i]));
    }
    obj->set("food",obj->max_food_capacity());
    obj->set("water",obj->max_water_capacity());
    obj->clear_condition();
message_vision(HIW+"$N神驰天外,身上放出万道金光。"+NOR"\n", me);
    return 1;
}
