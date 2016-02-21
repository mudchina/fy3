// roar.c 天龙吟

#include <ansi.h>

inherit F_CLEAN_UP;

int exert(object me, object target)
{
	object *ob;
	int i, skill, damage;

        if( ((int)me->query("force") < 600 ) || ( (int)me->query_skill("haoran-force",1) < 50) )
return notify_fail("你鼓足真气\"喵\"的叫了一声, 结果吓走了几只麻雀。\n");

	skill = me->query_skill("force");

	me->add("force", -150);
	me->receive_damage("kee", 10);

	me->start_busy(1);
	message_vision(
                HIG "$N深深地吸一囗气，真气回聚丹田，发出一声清啸，直冲九霄ⅵ\n" NOR
, me);

	ob = all_inventory(environment(me));
	for(i=0; i<sizeof(ob); i++) {
		if( !living(ob[i]) || ob[i]==me ) continue;
		if( skill/2 + random(skill/2) < (int)ob[i]->query("con") * 2 ) continue;
		
		if( !ob[i]->is_killing(me) ) ob[i]->kill_ob(me);
		if( !me->is_killing(ob[i]) ) me->fight_ob(ob[i]);
		damage = skill - ((int)ob[i]->query("max_force") / 10);
		if( damage > 0 ) {
			ob[i]->receive_damage("gin", damage * 2 );
			if( (int)ob[i]->query("force") < skill * 2 )
				ob[i]->receive_wound("gin", damage);
			tell_object(ob[i], "你觉得眼前一阵金星乱冒，耳朵痛得像是要裂开一样ⅵ\n");
		}
	}

	return 1;
}

