inherit NPC;
void create()
{
         set_name("弟子", ({ "yaofang dizi","dizi"}));
         set("gender", "男性");
         set("age", 22);
         set("long", "他是梅庄药房的管事弟子\n");
         
         set("per" , 27);
         set("str" , 1000);
         set("combat_exp", 120000);
         set("attitude", "killer");
         
         set("chat_chance", 8);
         set("chat_msg", ({
                 "人在江湖走，谁能不挨刀。\n",
                 "可怜的孩子，受伤了吧。\n",

 }));
         set_skill("unarmed", 200);
         set_skill("dodge", 200);
         set_skill("parry", 200);
         set_skill("liangqing-xiangyi", 200);


         set_temp("apply/attack", 2000);
         set_temp("apply/defense", 2000);

         setup();
         carry_object("/obj/cloth")->wear();
         add_money("silver",50);
}
