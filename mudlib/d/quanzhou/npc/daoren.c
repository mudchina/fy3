// dizi.c

inherit NPC;

void create()
{
	int skill;

	set_name("云游道人", ({ "daoren", "daoshi","yunyoudaoren"}) );
	set("gender", "男性" );
	set("age", 30+random(40));
	set("long", "仙风道骨,羽衣飞扬,一见便知是大有来头之人。\n");

	set("combat_exp",40000);
       set_skill("parry",50);
       set_skill("whip",50);
	set_skill("dodge", 50);
	set_skill("unarmed", 50);
        set("chat_chance", 8);
        set("chat_msg", ({
                "这位施主宅心仁慈,还请布施一二!\n",
                (: random_move :), 
                "贫道为建造武当三清观,遂入世间,广求布施.\n",
                (: random_move :), 
                "舍一文钱于三清,赐满堂福于汝门!\n",
                (: random_move :) 
        }) );

	setup();
	carry_object("/d/quanzhou/obj/taijicloth")->wear();
       carry_object("/d/quanzhou/obj/fuchen")->wield();
            add_money("silver",10);
}
int accept_object(object who,object item)
{ 
   object ob;
       ob=this_object();
      if (item->query("money_id"))
   {  message_vision("$N对$n稽首道:贫道代三清多谢施主!\n",ob,who);
      return 1;
    }
   else
    command("say 连三清你也敢骗,道爷饶不了你!\n");
return 0;
}