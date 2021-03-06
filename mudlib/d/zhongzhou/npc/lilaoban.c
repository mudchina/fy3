//li 餐厅老板
inherit NPC;
inherit F_VENDOR;

void create()
{
        set_name("李老板", ({ "li laoban","li" }) );
        set("gender", "男性" );
        set("age", 45);
        set("long",
                "李老板前几年刚从扬州回来，据说手艺很好，烧得一手好菜！\n");
        set("combat_exp", 45000);
        set("attitude", "friendly");

        set("vendor_goods", ([
                "盐巴" : __DIR__"obj/yan",
                "香油" : __DIR__"obj/xiangyou",
                "辣椒" : __DIR__"obj/lajiao",
                "酱油" : __DIR__"obj/jiangyou",
                             ]));

	set_skill("unarmed",60);
	set_skill("dodge",60);
	set_skill("parry",80);
	set_skill("force",60);
	set_temp("apply/armor",50);
	set_temp("apply/defense",30);
	set_temp("apply/damage",20);
	set("combat_exp",500000);

        setup();

	carry_object("/obj/cloth")->wear();
	carry_object("/obj/std/armor/pijia")->wear();
	add_money("gold" , 1);
}

void init()
{       
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }

        add_action("buy_object", "buy");
        add_action("do_vendor_list", "list");
}



void greeting(object ob)
{

         if( !ob || environment(ob) != environment() )
        
      	 return;


       say( "李老板热情的上前说：" + RANK_D->query_respect(ob)+ "，要是缺什么佐料可以买一点。\n");
}
