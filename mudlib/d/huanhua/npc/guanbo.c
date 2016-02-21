inherit NPC;
void create()
{
    set_name("广伯",({"guang bo"}));
    set("gender","男性");
    set("combat_exp",8000);
    set("attitude","friendly");
    set("title","哑巴");
    set("age",65);
    set("long","十分拘谨，背驼身曲，年岁已十分高，显然是仆人恃候
粗手粗脚，满脸皱纹，似历尽人世间沧桑无限。.\n");
    set_skill("unarmed",30);
    set("inquiry",([
           "掌中名剑":"这是我二十年前的名号,如今我都忘了!\n",
           "萧东广":"不错,我就是萧东广,但如今,大家叫我广伯!\n",
        ]));
    setup();
add_money("silver",1);
carry_object("/obj/cloth")->wear();
carry_object(__DIR__"obj/saozhou")->wield();
}
int accept_fight(object me)
{
     object ob;
   command("say 好,很久没杀人了,动动筋骨也好!\n");
   set("combat_exp",200000);
   set_skill("sword",120);
   set_skill("dodge",100);
   set_skill("parry",70);
   set_skill("force",70);
   set_skill("unarmed",70);
   ob=present("sword",this_object());
    if (!ob)
        ob=new(__DIR__"obj/gusong-jian")->move(this_object());
   command("unwield saozhou");
   command("wield sword");
   return 1;
}
     