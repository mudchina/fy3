#include <ansi.h>
inherit NPC;

void create()
{
        set_name("清净上人", ({ "shanren"}));
        set("nickname",HIC"不清不净"NOR);
        set("gender", "男性");
        set("age", 70);
        set("long", "一个浑身油腻的老道士盘坐在那里，嘴里不知嘟囔些
什么\n");
     
        set("inquiry", ([
            
            "练功" : "练功的快慢全在于机缘和悟性....\n",
      ]));

     set("chat_msg", ({
            "老道士说道：心诚则灵，天灵灵，地灵灵....\n",
         }) );

 
       set("combat_exp", 500000);
        set("shen_type", 5);
        set_skill("unarmed", 80);
        set_skill("sword", 80);
        set_skill("parry", 80);
        set_skill("dodge", 80);
       set_skill("force", 80);


        setup();
        carry_object("obj/weapon/sword")->wield();
        carry_object("/obj/cloth")->wear();
}

