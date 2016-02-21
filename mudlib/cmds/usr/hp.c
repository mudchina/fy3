// hp cmds (Mon  09-04-95)
// 
 
#include <ansi.h>
 
inherit F_CLEAN_UP;
 
string status_color(int current, int max);
 
string *npc_banghui=({
	"Ã÷½Ì",
	"ÈÕÔÂ½Ì",
	"ÌìµØ»á",
	"Ø¤°ï",
});

int main(object me, string arg)
{
	object ob,lp;
	mapping my,data;
	string banghui;
        seteuid(getuid(me));
 
        if(!arg)
                ob = me;
        else if ( arg == me->query("marry") )
            {
              ob = present(arg, environment(me));
		if(!ob || !ob->is_character())
		return notify_fail("Õâ¶ùÃ»ÓĞÕâÃ´¸öÈË¡£\n");
              printf("ÄãµÄ°éÂÂ×´Ì¬ÈçÏÂ:\n");
            }
        else if (wizardp(me)) {
                ob = present(arg, environment(me));
                if (!ob) ob = find_player(arg);
                if (!ob) ob = find_living(arg);
		if (!ob || !ob->is_character()) return notify_fail("ÄãÒª²ì¿´Ë­µÄ×´Ì¬£¿\n");
                               }

	else if ( stringp(banghui=me->query("banghui")))	{
		ob =present(arg,environment(me));
		if(! ob)	return notify_fail("Õâ¶ùÃ»ÓĞÕâÃ´¸öÈË¡£\n");
		if( ! ob->is_character())
			return notify_fail("Äã²»ÄÜ²é¿´ÕâÑù¶«Î÷¡£\n");
		if( ob->query("banghui")!=me->query("banghui"))
			return notify_fail("ÄãÖ»ÄÜ²é¿´±¾°ï»á°ïÖÚµÄ×´Ì¬¡£\n");
		}
	else return notify_fail("Ö»ÓĞÎ×Ê¦»òÍ¬°ï»áµÄÈË²ÅÄÜ²ì¿´±ğÈËµÄ×´Ì¬¡£\n");
        my = ob->query_entire_dbase();
 
printf(" ¾«  £º %s%4d/ %4d %s(%3d%%)" NOR "    µÀĞĞ£º %s%4d / %4d (+%d)\n" NOR,
                status_color(my["gin"], my["eff_gin"]), my["gin"],      my["eff_gin"],
                status_color(my["eff_gin"], my["max_gin"]),     my["eff_gin"] * 100 / my["max_gin"],
                status_color(my["atman"], my["max_atman"]),     my["atman"], my["max_atman"],
                my["atman_factor"] );
    printf(" Æø  £º %s%4d/ %4d %s(%3d%%)" NOR "    ÄÚÁ¦£º %s%4d / %4d (+%d)\n" NOR,
                status_color(my["kee"], my["eff_kee"]), my["kee"], my["eff_kee"],
                status_color(my["eff_kee"], my["max_kee"]),     my["eff_kee"] * 100 / my["max_kee"],
                status_color(my["force"], my["max_force"]),     my["force"], my["max_force"],
                my["force_factor"] );
printf(" Éñ  £º %s%4d/ %4d %s(%3d%%)" NOR "    ·ğ·¨£º %s%4d / %4d (+%d)\n" NOR,
                status_color(my["sen"], my["eff_sen"]), my["sen"], my["eff_sen"],
                status_color(my["eff_sen"], my["max_sen"]),     my["eff_sen"] * 100 / my["max_sen"],
                status_color(my["mana"], my["max_mana"]), my["mana"], my["max_mana"],
                my["mana_factor"] );
	if(userp(ob))	{
	if(member_array((string)ob->query("banghui"),npc_banghui)!=-1)
printf(" Ê³Îï£º %s%4d/ %4d      " NOR "     ÆÀ¼Û£ºº %s%d\n"NOR,
        status_color(my["food"], ob->max_food_capacity()),
        my["food"], ob->max_food_capacity(),
        HIY,
	(int)ob->query("score"));
	else
printf(" Ê³Îï£º %s%4d/ %4d      " NOR "     ÆÀ¼Û£ºº %s%s\n"NOR,
        status_color(my["food"], ob->max_food_capacity()),
        my["food"], ob->max_food_capacity(),
        HIY,
	"???");
	}
	else
printf(" Ê³Îï£º %s%4d/ %4d      " NOR "     ÖÒ³Ï£º %s%4d / %4d\n"NOR,
	status_color(my["food"], ob->max_food_capacity()),
	my["food"], ob->max_food_capacity(),
	status_color(ob->query("zhongcheng"),ob->query("max_zhongcheng")),
	ob->query("zhongcheng"),ob->query("max_zhongcheng"));
    printf(" ÒûË®£º %s%4d/ %4d      " NOR "     ¾­Ñé£º %s%d\n" NOR,
        status_color(my["water"], ob->max_water_capacity()),
        my["water"], ob->max_water_capacity(),
        HIM,
        my["combat_exp"] );
        return 1;
}
 
string status_color(int current, int max)
{
        int percent;
 
        if( max>0 ) percent = current * 100 / max;
        else percent = 100;
        if( percent > 100 ) return HIC;
        if( percent >= 90 ) return HIG;
        if( percent >= 60 ) return HIY;
        if( percent >= 30 ) return YEL;
        if( percent >= 10 ) return HIR;
        return RED;
}
 
int help(object me)
{
        write(@HELP
Ö¸Áî¸ñÊ½ : hp
           hp <¶ÔÏóÃû³Æ>                   (Î×Ê¦×¨ÓÃ)
           hp <°éÂÂÃû³Æ>                   (·òÆŞ×¨ÓÃ)
 
Õâ¸öÖ¸Áî¿ÉÒÔÏÔÊ¾Äã»òÖ¸¶¨¶ÔÏó(º¬¹ÖÎï)µÄ¾«, Æø, ÉñÊıÖµ¡£
 
see also : score
HELP
    );
    return 1;
}

