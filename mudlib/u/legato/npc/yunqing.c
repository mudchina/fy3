#include <ansi.h>;
inherit NPC;
inherit F_MASTER;
int perform();
void create()
{
        set_name("云青", ({ "yun qing", "yun"}) );
        set("title","落雁公子");
        set("gender", "男性");
        set("nickname",MAG"落雨长歌"NOR);
        set("age", 28);
        set("str", 40);
        set("cor", 40);
        set("cps", 43);
        set("int", 40);
        
        set("shen_type", 6);

        set("max_force", 5000);
        set("force", 5000);
        set("force_factor", 50);

        set("attitude", "peaceful");
        set("combat_exp", 5867362);
       set_skill("unarmed", 180);
        set_skill("sword", 180);
        set_skill("parry", 180);
        set_skill("dodge", 180);
       set_skill("force", 180);
       set_skill("luoyan-jianfa",180);
       set_skill("yuxuan-guizhen",180);
       set_skill("tianfeng-xuan",180);
       set_skill("tiangang-zhi",180);
       set_skill("changge-jianfa",200);
       set_skill("literate",200);
       map_skill("dodge","tianfeng-xuan");
       map_skill("sword","changge-jianfa");
       map_skill("unarmed","tiangang-zhi");
       map_skill("parry","tiangang-zhi");
       map_skill("force","yuxuan-guizhen");
       create_family("雁荡派",2,"弟子");
        set_temp("apply/attack", 25);
        set_temp("apply/defense", 25);
        set_temp("apply/damage", 25);
        setup();
carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
}
void init()
{ 
  tell_object(this_player(),"云青望着你喃喃的说：我以为是她来了，脸上布满失望的神情\n");
  tell_object(this_player(),"云青一声长叹：“都是爱情惹的祸！\n");
  tell_object(this_player(),"云青关切的向你问道：“义父他老人家好么？\n");
}

void attempt_apprentice(object ob)
 {  if (ob->query_skill("yuxuan-guizhen",1)>50)   {
        command("nod");
        command("say " + RANK_D->query_respect(ob) + 
"看你浑身湿淋淋的，大老远到这也不容易，我就收了你吧
但你要记住：阶级斗争还远远没有结束，越是漂亮的女人越不可信
什么甜言蜜语都不要往心里去，你还年轻，一定
要把主要精力放到学习上，学好数理化，走遍天下都不怕
................唉！你听进去没有呀\n");
        command("recruit " + ob->query("id") );
        return;
   }
 else command("say 你的玉玄归真练得还不到家呀,再努力吧.\n");
 return;
 }
 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("class", "xiake");
                message("channel:rumor", 
YEL"【谣言】"+ "某人："+ob->query("name")+"今日加入雁荡一派。\n"NOR,users());
return;
 }

