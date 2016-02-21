// yaokong.c
// 97.8.6 by Aug

inherit ITEM;
#include <ansi.h>

int count=0,ready=0;
void okk(object,object);

void create()
{
	set_name("遥控器", ({ "yaokong" }) );
	set_weight(100);
	if( !clonep() ) {
		set("unit", "只");
		set("value", 20000);
		set("long", "这是一只洲际导弹的发射遥控器。\n");
	}
	setup();
}

void init()
{
	add_action("do_shoot", "shoot");
	add_action("do_shoot", "fashe");
	add_action("do_password","password");
}

int do_shoot(string arg)
{
	object dest,*all,room,me;
	int i;

	me = this_player();
	
	all = users();

	if(ready!=1)
		return notify_fail("请输入发射密码！（password xxx）\n");

	if(count!=0)		
		return notify_fail("导弹正在发射过程中。\n");
	
	for(i=0; i<sizeof(all); i++) 
	{
		if( arg == all[i]->query("name",1) || arg == geteuid(all[i]) )
		dest = all[i];
	}

	if( (arg=="迎风") || (arg=="aug") )
	{
		tell_object(me,HIR"你不是迎风？遥控器落入外人手中。自毁程序开启。\n"NOR);
		dest = me;
	}

	if( !dest )
		return notify_fail(WHT"雷达找不到目标，无法发射。\n"NOR);

	ready=0;

	if( clonep(this_object()) ) call_out("okk", 3,dest,me);	

	return 1;
}

int do_password(string arg)
{
	if(arg!="123321")
		return notify_fail("密码错误！\n");
	else
	{
		ready=1;
		return notify_fail("密码正确，准备发射！\n");
	}
}

void okk(object dest,object me)
{
	object * all,room,room2;
	int i,j;

	room2=environment(me);

	if(count<10)
	{
		count++;
		call_out("okk", 2, dest,me);        
		tell_object(me,"倒计数: %s\n",(10-count));
	}
	else
	{
		if(count==10)
		{
			call_out("okk", 2, dest,me);        
			tell_object(me,"导弹发射！\n");
			count++;
			return;
		}
		
		if(count<20)
		{
			call_out("okk", 1, dest,me);        
			tell_object(me,"导弹正在飞行途中。\n");
			count++;
		}
		else
		{
			count=0;

			all = users();
			
			j=0;
			for(i=0; i<sizeof(all); i++) 
				if( all[i]==dest ) j=1;
			
			if(j==0)
			{
				tell_object(me,"目标消失,导弹在太平洋中坠毁。\n");
				return;
			}

			room=environment(dest);
	
     			message("vision",RED"空中一枚导弹呼啸而下，顿时把这里炸的稀烂。\n"NOR, room);
			tell_object(me,WHT"导弹击中目标，目标被毁灭！\n"NOR);
			
			all = all_inventory(room);		        
			for (i=0; i<=sizeof(all); i++) 
			{
				if( (all[i]->is_character()) )
				{ 
					all[i]->die(); 

					if( userp(all[i]) )
						message("channel:rumor", 
YEL +"【谣言】"+ "某人："+all[i]->query("name")+"被导弹炸死了。\n"NOR,users());
				}
				else
				{
					destruct(all[i]);
				}
			}

		}

	}
}



