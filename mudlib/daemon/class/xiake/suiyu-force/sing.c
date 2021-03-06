// sing.c  碧海潮生曲
// 97.8.18 by Aug

//inherit SSERVER;

#include <ansi.h>
int exert(object me, object target)
{
	int i,j,damage;
	object * all,ob;

	if ((int)me->query_skill("suiyu-force",1)<80)
		return notify_fail("你的碎玉神功功力不够，无法奏出碧海潮生曲。\n");

	if ((int)me->query_skill("literate",1)<80)
		return notify_fail("你的文化修养不够，无法奏出碧海潮生曲。\n");

	if ((int)me->query("force")<300)
		return notify_fail("你的内力不够，不能奏出碧海潮生曲。\n");

	ob=me->query_temp("weapon");
	if ( ((!ob)||(ob->query("can_sing")!="yes" )) ) 
		return notify_fail("你没有装备萧，怎么吹奏碧海潮生曲啊？\n");

	message_vision(CYN"$N拿起一支"+ob->query("name")+CYN+"，缓缓的吹奏起碧海潮生曲。\n"NOR, me);

      all = all_inventory(environment(me)); 

	for (i=0; i<sizeof(all); i++) 
	{
		if( userp(all[i]) )
		{
			if(all[i]!=me)
			{
				tell_object(all[i],
CYN"你只觉得这乐曲是那么的动听，不知不觉被它所吸引，不由自主的想随着这曲调而起舞。\n"+HIR+
"但直觉告诉你这美妙的乐曲中暗藏着层层杀机，你不得不运功向抗。\n"NOR);				
			}
		}

		if( ( (all[i]->is_character())&&(all[i]->query("id")!="corpse") ) )
			all[i]->set_temp("sing",1);
	}

	damage = 90*me->query_skill("suiyu-force",1)/100*(8+ob->query("sing_level"))/10;

	call_out("do_sing",1,me,0,damage);

	return 1;
}
	
int check_sing(object me,object ob)
{
	int i,j;
	object * all;	
	string s;
	mapping exits;
      string *dirs;


	ob->set_temp("sing",2);

	if(ob->query("cps")>ob->query("spi")) 
		i=ob->query("cps"); 
	else 
		i=ob->query("spi");

	j=(ob->query_skill("force")*1200/me->query_skill("force")+
		ob->query("combat_exp")*1200/me->query("combat_exp")+
			i*600/26)/3;
	if(j<825) j=825;
	j=random(j);

	if(j>1500)
	{
		all = all_inventory(environment(me)); 
		for (i=0; i<sizeof(all); i++) 
		{
			if(all[i]==ob) s=HIC+"你";
				else s=HIC+ob->query("name");
			s+="运足内功大吼一声，吓的";
			if(all[i]==me) s+=HIC+"你";
				else s+=HIC+me->query("name");
			s+="打了个哆嗦，连手中的萧也掉在了地上。\n"+HIR+"接着'哇'的吐出一大口鲜血，看来受了极重的内伤。\n"NOR;

			tell_object(all[i],s);
		}

		me->receive_wound("kee",200+random(ob->query_skill("force")) );
		if(me->query("kee")<0)
		{
			me->die();
			message("channel:rumor", 
YEL"【谣言】"+ "某人："+me->query("name")+"被"+ob->query("name")+"的吼声震死了。\n"NOR,users());
		}

		return 2;
	}
		
	if( userp(ob) )
	{
		if(j>800)
		{
			all = all_inventory(environment(me)); 
			for (i=0; i<sizeof(all); i++) 
			{
				if(all[i]==ob) 
					tell_object(all[i],HIC"你以极大的定力抵御住了碧海潮生曲的巨大诱惑，飞步离开此地。\n"NOR);
				else
					tell_object(all[i],HIC+ob->query("name")+"以极大的定力抵御住了碧海潮生曲的巨大诱惑，飞步离开此地。\n"NOR);
			}
		
			if( !mapp(exits = environment(me)->query("exits")) )  	
			{
				for (i=0; i<sizeof(all); i++) 
				{
					if(all[i]==ob) 
						tell_object(all[i],HIC"可是你发现根本没有路可以出去，你只能又坐下来运功与萧声向抗。\n"NOR);
					else
						tell_object(all[i],HIC"可是"+ob->query("name")+"发现根本没有路可以出去，"+ob->query("name")+"只能又坐下来运功与萧声向抗。\n"NOR);
				}
			}
			else
			{
			     	dirs = keys(exits);
			
				for(i=0;i<sizeof(dirs);i++)
				{			
					if( environment(me)->valid_leave(ob, dirs[i]))	
					{
						ob->move(exits[dirs[i]]);
						return 3;
					}
				}

				for (i=0; i<sizeof(all); i++) 
				{
					if(all[i]==ob) 
						tell_object(all[i],HIC"可是你发现你无法离开这里，你只能又坐下来运功与萧声向抗。\n"NOR);
					else
						tell_object(all[i],HIC"可是"+ob->query("name")+"发现无法离开这里，"+ob->query("name")+"只能又坐下来运功与萧声向抗。\n"NOR);
				}			
				
			}
		}
	}

	return 1;
}

void do_sing(object me,int ptime,int damage)
{
	int i,j,k;
	object * all;

	all = all_inventory(environment(me)); 

	k=0;

	for (i=0; i<sizeof(all); i++) 
	{
		if( ( (all[i]->is_character())&&(all[i]->query("id")!="corpse") ) )
		{
			all[i]->start_busy(3);						

			if(all[i]!=me)
			{
				if(all[i]->query_temp("sing")!=2)
				{
					if(all[i]->query_temp("sing")==0)
					{
						tell_object(all[i],
CYN"你一走近这里就看到"+me->query("name")+CYN+"正在吹萧，
你只觉得这乐曲是那么的动听，不知不觉被它所吸引，不由自主的想随着这曲调而起舞。\n"+HIR+
"但直觉告诉你这美妙的乐曲中暗藏着层层杀机，你不得不运功向抗。\n"NOR);				
					}

					j=check_sing(me,all[i]);
					if(j==2) 
					{
						for (j=0; j<sizeof(all); j++) 
							all[j]->delete_temp("sing");
						return;
					}	
					if(j==3)
					{
						all[i]->delete_temp("sing");
						all = all_inventory(environment(me)); 

						i--;
					}
				}
				else j=0;


				if(j!=3)
				{

				k=1;
				j=all[i]->query("force")+all[i]->query("kee");				

				if(j<damage)
				{
					message("vision",
RED+all[i]->query("name")+"内力、体力都已耗尽，力竭而亡。\n"NOR, environment(me));
					if( userp(all[i]) )
					{
						message("channel:rumor", 
YEL"【谣言】"+ "某人："+all[i]->query("name")+"被"+me->query("name")+"的碧海潮生曲迷惑，狂舞不止而死。\n"NOR,users());
					}				

					all[i]->die();
				}					
				else
				{
					if(all[i]->query("force")<damage)
					{
						all[i]->set("kee",j-damage);
						all[i]->set("force",0);

						if( userp(all[i]) )
							tell_object(all[i],HIR"你内力耗尽，再也不能和萧声向抗，失去控制狂舞不止。\n"NOR);								
					}
					else
					{
						all[i]->set("force",all[i]->query("force")-damage);

						if( userp(all[i]) )
							tell_object(all[i],CYN"你正在运功抵抗碧海潮生曲的诱惑力。\n"NOR);
					}

				}
				}
			}
			else
			{
				me->set("force",me->query("force")-30 );

				tell_object(me,CYN"你正在吹奏碧海潮生曲。\n"NOR);
			}
		}
	}
	
	if(k==0) ptime=30;

	if(ptime==30)
	{
		all = all_inventory(environment(me)); 

		for (i=0; i<sizeof(all); i++) 
		{
			if( ( (all[i]->is_character())&&(all[i]->query("id")!="corpse") ) )
			{
				if(all[i]!=me)
					tell_object(all[i],CYN+me->query("name")+"放下萧，碧海潮生曲吹奏完毕。\n"NOR);
				else
					tell_object(me,CYN+"你放下萧，碧海潮生曲吹奏完毕。\n"NOR);
			}
		}

		for (j=0; j<sizeof(all); j++) 
			all[j]->delete_temp("sing");
	}
	else
	{
		call_out("do_sing",3,me,ptime+3,damage);
	}	
}



