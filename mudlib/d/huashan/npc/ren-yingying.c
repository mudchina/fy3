// ren-yingying.c

inherit NPC;

void create()
{
        set_name("任盈盈", ({ "ren yingying", "yingying" }) );
        set("title","魔教圣姑");
        set("gender", "女性" );
        set("age", 19);
        set("str", 16);
        set("con", 30);
        set("int", 30);

        set("attitude", "friendly");

        set("gin",1000);
        set("max_gin",1000);
        set("kee",1500);
        set("max_kee",1500);
        set("force", 1200);
        set("max_force", 1200);
        set("force_factor", 50);
        set("mingwang",50000);

        set("long",     "任盈盈是魔教前教主任我行的独生女儿。\n");
        set("combat_exp", 500000);
        set("shen_tpye", 1);
        set_skill("unarmed", 90);
        set_skill("sword", 90);
        set_skill("force", 100);
        set_skill("parry", 100);
        set_skill("dodge", 100);
        set_skill("literate", 100);
        set("chat_chance",5);
        set("chat_msg",({
 "任盈盈眉头轻皱，低首寻思，悠然间红晕上脸，娇羞无限。\n",
 "任盈盈低声道：衣带渐宽终不悔，为伊消得人憔悴。",
 }));

        set_skill("huashan-jianfa", 100);
        set_skill("zixia-shengong", 100);
        set_skill("huashan-quanfa", 100);
        set_skill("feiyan-huixiang", 100);

        map_skill("sword", "huashan-jianfa");
        map_skill("parry", "huashan-jianfa");
        map_skill("force", "zixia-shengong");
        map_skill("unarmed", "huashan-quanfa");
        map_skill("dodge", "feiyan-huixiang");
        setup();

        carry_object("/obj/std/weapon/duanjian")->wield();
        carry_object("/obj/armor/female5-cloth")->wear();

}

int accept_fight(object me)
{
        command("say 我久不同人交手，你找错人了.");
        return 0;
}
/*void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting",2 , ob);
        }
}
void greeting(object ob)
{
      say( "任盈盈微微叹了口气：“不知道我的令狐大哥在何方?”\n");
	if ( ((int)ob->query_kar()>=25) && ((int)ob->query_int()>=25) )
      {
           tell_object(ob,"任盈盈说道：请你务必找到我令狐大哥.\n");
           ob->set("marks/feng-qingyang",1);
      tell_object(ob,"任盈盈所完这句话，飘然隐去.\n");
      call_out("goway",10);
	}
}
void goway(){
      destruct(this_object());
}  */
