#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
        set_name(MAG"紫阑争风"NOR,({ "zilan sword","sword"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long",        MAG"这是御赐的宝剑。\n"NOR);
                set("value",500000);
                set("material", "steel");                              
        }
           init_sword(200);

        set("wield_msg", MAG"只见眼前一亮，你感觉到阵阵杀气，$N的手中多了把的宝剑。\n"NOR);
        set("unwield_msg", MAG"紫光迅然消失,$N手中的紫阑争风已收入剑鞘内。四周平静了许多。\n"NOR);


        setup();
}

mixed weapon_action(object me,object victim)
{
        object ob,target_weapon;
        string msg;
        target_weapon=victim->query_temp("weapon");
        if(! target_weapon)     return 0;
        if( target_weapon->query("oldsix/qjdy"))        {
                msg=MAG"“铛”的一声，"+this_object()->query("name")+MAG"与"+
                target_weapon->query("name")+MAG"相交，冒出点点火星！\n"NOR;
                return msg;
        }
        msg=MAG"只见紫光暴涨，"+victim->query("name")+MAG"手中的"+target_weapon->query("name")+MAG"被"+this_object()->query("name")+MAG"手中一轻，宝剑脱手而飞。！\n"NOR;
                        
                        destruct(this_object());
                        return msg;

}

