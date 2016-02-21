// bath.c
// by musix

void wakeup(object,object);
void del_sleeped(object);

int main(object me, string arg)
{
	mapping fam;
	object where = environment(me);
	int ttt;

        seteuid(getuid());

	if (!(where->query("bath_room"))  )
             return notify_fail("在这里洗澡好象不太安全。\n");
   
	if (me->is_busy())
		return notify_fail("你正忙着呢！\n");

	if( me->is_fighting() )
		return notify_fail("你找死啊！\n");
        
	if (where->query("hotel") && !(me->query_temp("rent_paid")))
	{
		message_vision("澡堂伙计探头进来对$N道：付了钱再来洗!\n",me);
		return 1;
	}
 
	if (me->query_temp("bathed"))
		return notify_fail("别再洗啦！多洗对身体有害无益! \n");

	if (where->query("bath_room"))
	{
            if(where->query("bath_equipment"))
              {	
	       
                write("你脱下衣衫，舒舒复复的泡在"+
                where->query("bath_equipment")+"里。\n");
               }
            else{ 
                write("你脱下衣衫开始洗澡。\n");  
                }
		me->set_temp("block_msg/all",1);
		message_vision("$N脱下衣衫开始洗澡。\n",me);
	}

	where->set("no_fight", 1);
	where->add_temp("bathing_person", 1);

	me->set("no_get", 1);	
	me->set("no_get_from", 1);	
	
	if (!(where->query("hotel"))) 
		me->set_temp("bathed",1);
	else
		me->delete_temp("rent_paid");

	me->disable_player("<洗澡中>");
        ttt= me->query_con() ;
        if(ttt>40) ttt=40 ;
//	call_out("wakeup",random(45 - me->query("con")) + 45, me, where);
        call_out("wakeup",random(60 - ttt) , me, where);        
	return 1;
	
}

void wakeup(object me,object where)

{

	if((int)me->query("force")+100>=(int)me->query("max_force"))
		me->set("force",(int)me->query("max_force"));
	else	me->add("force",100);
	if((int)me->query("mana")+50>=(int)me->query("max_mana"))
		me->set("mana",(int)me->query("max_mana"));
	else	me->add("mana",50);
	if((int)me->query("atman")+50>=(int)me->query("max_atman"))
		me->set("atman",(int)me->query("max_atman"));
	else	me->add("atman",50);


	me->enable_player();
  
	call_out("del_bathed", 359, me);

	message_vision("$N洗完澡，起身穿好衣服。\n",me);
	me->set_temp("block_msg/all", 0);
	write("你起身穿上衣服，精神好多了。\n");

	if (!where->query("bath_room") && !where->query("hotel"))
		where->delete("no_fight");
     
	where->add_temp("bathing_person", -1);
	me->delete("no_get");	
	me->delete("no_get_from");	
 
}

void del_sleeped(object me)
{
	if (objectp(me) &&  me->query_temp("bathed"))
		me->delete_temp("bathed");
}
