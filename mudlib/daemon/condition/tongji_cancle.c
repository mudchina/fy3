// snake_poison.c

#include <ansi.h>

int update_condition(object me)
{
	if(me->query("oldsix_flag/tongji")==0)	return 0;
	if(me->query("mud_age")-me->query("oldsix_flag/time2")>=1800)	{
	me->set("oldsix_flag/tongji",0);
	message("channel:rumor", YEL +"【谣言】"+ "某人：苏州官府取消了对"+me->query("name")+"的通缉。\n"NOR,users());
		return 0;
	}
	me->apply_condition("tongji_cancle");
	return 1;
}
