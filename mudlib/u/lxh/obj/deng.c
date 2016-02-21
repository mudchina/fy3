//sd-card.c 圣诞卡 by lxh 13:56 98-12-26

#include <ansi.h>

inherit ITEM;

string *names = ({
  "莲花灯",
  "元宵灯",
  "桔花灯",
  "青龙灯",
  "金凤灯",
  "麒麟灯",
  "翡翠灯",
  "玉兔灯",
  "兰花灯",
  "朝阳灯",
  "走马灯",
  "梦幻灯",
  "云雾灯",
});

void create()
{
  seteuid(getuid());
        set_name(names[random(sizeof(names))], ({ "deng long", "deng", "long"})); 
        set("long",HIR"【铁血江湖】"NOR"特意送给你的"+query("name")+"。\n
你可以拿（na）着它四处走走\n");
        set("unit", "个");
        set("value", 0);
        set("no_give",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_beg",1);
        set("no_get_from",1);
        set("weight", 50);
        set("no_sell",1);           
}


void init()
{
    add_action("do_na","na");
}

int do_na(string arg)
{
        object ob;
        mapping skl;
        string *sname,str;
        int i,add_exp,add_money;
        

        if( !id(arg) ) return notify_fail("你要拿起什麽？\n");

        seteuid(getuid());
        ob=this_player();
        add_money=ob->query("mud_age");
        add_exp=ob->query("mud_age")/100;
        if( !id(arg) ) return 0 ;
        if( living(this_player()) ==0 ) return 0;
        skl = ob->query_skills();
        
write("你拿起灯笼，小心的点亮。\n\n
祝～～你～～快～～乐～～\n\n
恭喜你在"HIR"【铁血江湖】"NOR"度过千禧元宵。\n\n
～～～～～～～～～～～～～～？\n\n
你忽然觉得有一种神秘的力量涌向你～～～～\n\n");
    if(!ob->query("lxh-15")) 
  	{
    
  
//主要考虑到游戏恢复的是1.31的备份，所以加的比较多 by lxh 0-2-19 13:23
        if(ob->query("age")>15) {
        	
            	ob->add("combat_exp",add_exp);
   	 	 write("你的实战经验增加了"HIR"+"+chinese_number(add_exp)+"+"NOR"点！！\n");
   	 	         ob->set("lxh-15",1);

        ob->set("kee",(int)ob->query("eff_kee"));
        ob->set("jin",(int)ob->query("eff_jin"));
        ob->set("sen",(int)ob->query("eff_sen"));

        ob->set("force", (int)ob->query("max_force")*2);
        ob->set("mana", (int)ob->query("max_mana")*2);
        ob->set("atman", (int)ob->query("max_atman")*2);  
      

        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);
        ob->add("con",1);
        ob->add("str",1);
        ob->add("int",1);
        write(HIC"你的体质全面提升了!\n"NOR);
        
        
        if(!sizeof(skl)) return 1;

  	      sname = sort_array( keys(skl), (: strcmp :) );

        for(i=0; i<sizeof(skl); i++) 
        {
                ob->set_skill( sname[i] , skl[sname[i]]+2 );
                write(HIW"你的技能全面提升了。\n"NOR);
        }
        
        ob->add("balance",add_money);
           	write(HIY"你的银行存款增加了！！\n"NOR);
           	 destruct(this_object());
   	 	 return 1;
   	 	} else 
   	 	
   	 		ob->add("combat_exp",10000);
   	 		write("你的实战经验增加了"HIR"+"+chinese_number(10000)+"+"NOR"点！！\n");   	 	
                        
    
        ob->set("lxh-15",1);

        ob->set("kee",(int)ob->query("eff_kee"));
        ob->set("jin",(int)ob->query("eff_jin"));
        ob->set("sen",(int)ob->query("eff_sen"));

        ob->set("force", (int)ob->query("max_force")*2);
        ob->set("mana", (int)ob->query("max_mana")*2);
        ob->set("atman", (int)ob->query("max_atman")*2);  
      

        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);
        ob->add("con",1);
        ob->add("str",1);
        ob->add("int",1);
        write(HIW"你的体质全面提升了!\n"NOR);
        
        
        if(!sizeof(skl)) return 1;

  	      sname = sort_array( keys(skl), (: strcmp :) );

        for(i=0; i<sizeof(skl); i++) 
        {
                ob->set_skill( sname[i] , skl[sname[i]]+5 );
                write(HIW"你的技能全面提升了。\n"NOR);
        }
        
        ob->add("balance",add_money*2);
           	write(HIY"你的银行存款增加了！！\n"NOR);
           	
       destruct(this_object());
       return 1;    
        
        }
       destruct(this_object());
       return 1;    
}
