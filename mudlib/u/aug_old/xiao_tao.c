// xiao_tao.c by ksusan 07/06/1997
// 97.8.18  by Aug


inherit NPC;

void create()
{
		set_name("小桃", ({ "xiaotao", "tao" }) );
        set("gender", "女性" );
		set("age", 16);
		set("long",
"小桃是个很可爱的小姑娘，笑起来脸上就露出两个酒涡。
庄主让她在这里管分发武器，你可以用list看一下有什么武器，
用yao来要武器.\n");

        set("str", 20);
        set("cor", 20);
        set("cps", 23);
        set("int", 20);

        set("max_force", 200);
        set("force", 200);
        set("force_factor", 2);

		set("shen_type", 1);

        create_family("桃花岛", 4, "弟子");

        set("combat_exp", 1000);
        set("score", 1000);

		set_skill("force", 10);
		set_skill("parry", 10);
		set_skill("dodge", 10);
		set_skill("sword", 10);
		set_skill("literate", 10);

	    set_skill("suiyu-force",10);
   	    set_skill("luoying-sword",10);
     	set_skill("luoying-strike",10);
      	set_skill("bagua-steps",10);
      	set_skill("lanhua-finger",10);
	
		map_skill("dodge",  "bagua-steps");
		map_skill("unarmed","lanhua-finger");
		map_skill("parry",  "luoying-sword");
		map_skill("force",  "suiyu-force");
      	map_skill("sword",  "luoying-sword");


		set("inquiry", ([
			"陆家庄" : "这里便是陆家庄。",
			"归云庄" : "归云庄就是陆家庄。",
		]) );	

		setup();
		add_money("silver", 1);
		carry_object("/obj/cloth")->wear();
		carry_object("/obj/weapon/sword")->wield();
}

void init()
{
	::init();
	add_action("do_list", "list");
	add_action("do_yao", "yao");
}

int accept_fight(object ob)
{
	command("emote 笑道：我可不是你的对手。");
	return 0;
}

int accept_kill(object ob)
{
	command("emote 吃了一惊，叫道：你为什么要杀我啊？！");
	return 1;
}

int do_list(string arg)
{
   
  write("小桃笑道：我这儿有竹剑(zhujian),竹萧(zhuxiao),铁指套(iron finger)。\n");    

  return 1;
}

int do_yao(string arg)
{
  object ob,me;

  me=this_player();
  if(me->query_temp("weapon_time")==0)
    me->set_temp("weapon_time",-10000);
  if((time()-me->query_temp("weapon_time"))<600)
    return notify_fail("小桃说道：你不是刚要过吗，怎么又来了？\n");

  if((arg=="zhujian")||(arg=="iron finger")||(arg=="finger")||(arg=="iron strike")||(arg=="strike")||(arg=="zhuxiao")||(arg=="xiao"))
  {
    if( me->over_encumbranced() )
	 return notify_fail("你已经负荷过重了！\n");

    if(arg=="zhujian") 
      ob=new(__DIR__"obj/zhujian");
    if((arg=="iron finger")||(arg=="finger"))             	
	ob=new(__DIR__"obj/iron_finger");
    if((arg=="zhuxiao")||(arg=="xiao")) 
	ob=new(__DIR__"obj/zhuxiao");
//    if((arg=="iron strike")||(arg=="strike"))
//      ob=new(__DIR__"obj/iron_strike");

    ob->move(me);
    me->set_temp("weapon_time",time());

    message_vision("小桃给$n一"+ob->query("unit")+ob->query("name")+"。\n", this_object(),me);
    return 1;
  }
  else
    return notify_fail("小桃说道：你要的东西我没有。\n");
}
