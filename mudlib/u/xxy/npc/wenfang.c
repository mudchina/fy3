inherit NPC;
inherit F_VENDOR;

void create()
{
	int skill;

	set_name("温方达", ({ "wen fangda", "wenlaoban","wen","laoban"}) );
	set("gender", "男性" );
	set("age", 30+random(40));
	set("long", "温家老店传到他身上已经是第六代了,不过
大家都说温老板强爷胜祖,所以到了他这代,
温家铺子更是红火得不行。\n");
       set("score",5000);
             set("shen_type",-1);
	set("combat_exp",400000);
       set_skill("parry",120);
       set_skill("staff",120);
	set_skill("dodge", 120);
	set_skill("unarmed", 120);
	set("vendor_goods", ([
		"guanyin":"/d/jindezheng/obj/guanyin",
		"shuijinpin":"/d/jindezheng/obj/shuijinpin",
		"erping":"/d/jindezheng/obj/erping",
             "haierzheng":"/d/jindezheng/obj/haierzheng",  
             "qiankunhu":"/d/jindezheng/obj/qiankunhu",
	]) );

	setup();
	carry_object(__DIR__"obj/fucloth")->wear();
       carry_object(__DIR__"obj/guaizhang")->wield();
            add_money("gold",4);
}
void init()
{  object ob;	
	::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("meeting");
                call_out("meeting", 1, ob);
        }
	 add_action("do_vendor_list","list");
}
void meeting(object ob)
{ 
  if( !ob || environment(ob) != environment() ) return;
  switch(random(3))
  {   case 1:
        command("say 这位"+RANK_D->query_respect(ob)+",是来小铺买瓷器的么?\n");
        break;
      case 2:
        command("这几天买瓷器的人真多,该让瓷窑多开工了!\n");
        break;
      case 3:
       command("smile");
        break;
    }
}

