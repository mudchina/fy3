// dizi.c

inherit NPC;
void create()
{
	int skill;

	set_name("孙都察", ({ "sun", "ducha"}) );
	set("gender", "男性" );
	set("age", 40+random(10));
        set("title","出海先问我");
	set("long", "官府派来监管码头的官员,
你可以向他打听出海的事(ask sun about 出海)。\n");
	set("combat_exp",40000);
       set("inquiry", ([
		"出海" : "请先到知府衙门申请路引,然后给我就行了。",
		"路引" : "这是泉州知府的规定,出海一定先要验证身份。",
	]) );


	set_skill("dodge", 10);
	set_skill("unarmed", 10);
	setup();
	carry_object("/obj/armor/cloth")->wear();
       add_money("silver",5);
}
int accept_object(object who,object item)
{	
   string str;
   object room1;

   if (!item->query("where")) return 0;
    room1=load_object("/d/quanzhou/haigang");
   if (!room1->query("exits/enter"))    {
      tell_room(room1,"都察指了指码头道:船刚出海,你等会再来吧!\n");
      return notify_fail("");
     }
message_vision("$N一挥手,对$n道:你上船吧!\n",this_object(),who);
      str=item->query("where");
           switch(str)
          {
           case "hainan":
                     who->set_temp("luyin/target",1);
                     return 1;
           case "taiwan":
                     who->set_temp("luyin/target",2);
	     return 1;
	  }
return 0;
}
