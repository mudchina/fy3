inherit NPC;
string *a=({"/blade/blade","/blade/caidao","/blade/dandao","/blade/jiedao","/sword/changjian",
"/sword/duanjian","/axe/bigaxe","/axe/tiefu","/hammer/hammer","/throwing/stone"});
void create()
{    
    set_name("大汉",({"da han"}));
    set("gender","男性");
    set("attitude","friendly");
    set("combat_exp",2000);
    set("age",36);
    set("str",23);
    set("long","一个敞胸露肚,满脸胡子的大汉.\n");
    set_skill("unarmed",10);
    set_skill("blade",10);
    set_skill("sword",10);
    set_skill("dodge",10);
    set_skill("parry",10);
    set("chat_chance",10);
       set("chat_msg",({
             (:random_move:),
    }));
    setup();
add_money("silver",2);
carry_object("/obj/cloth")->wear();
carry_object("/d/obj/weapon"+a[random(sizeof(a))])->wield();
}
int accept_fight(object me)
{
   command("say 再来烦扰老爷,小心把你作喽!\n");
   return 0;
}
