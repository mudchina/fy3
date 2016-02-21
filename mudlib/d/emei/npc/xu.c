// xu.c 静虚师太
// Modified by That Oct.1997
#include <command.h>
#include <ansi.h>

inherit NPC;
inherit F_MASTER;
string ask_for_join();
void create()
{

        set_name("静虚师太", ({ "jingxu shitai","jingxu","shitai"}));
        set("long",
          "她是峨嵋派二师姐，峨嵋门下多年，一套峨嵋掌法名动江湖。。\n");
        set("gender", "女性");
        set("age", 43);
        set("attitude", "peaceful");
        set("mingwang", 10000);
        set("class", "bonze");
        set("inquiry",([
                "剃度"  : (: ask_for_join :),
                "出家"  : (: ask_for_join :),
                "还俗"  : "峨嵋弟子，不能还俗。你找掌门师太吧。",
        ]));

        set("str", 30);
        set("int", 30);
        set("con", 30);
        set("per", 20);

        set("max_kee", 1000);
        set("max_gin", 500);
        set("force", 1500);
        set("max_force", 1500);
        set("force_factor", 15);
        set("max_sen", 1500);

        set("combat_exp", 250000);
        set("score", 1000);
        set_skill("foxuexinde", 80);
        set_skill("force", 100);
        set_skill("dodge", 90);
        set_skill("parry", 90);
        set_skill("unarmed", 80);
        set_skill("sword", 100);
        set_skill("literate", 90);

        set_skill("sixiang-zhang", 100);
        set_skill("anying-fuxiang", 90);
        set_skill("huifeng-jian", 100);
        set_skill("emei-xinfa", 100);
        set_skill("literate", 100);
        map_skill("force","emei-xinfa");
        map_skill("dodge","anying-fuxiang");
        map_skill("unarmed","sixiang-zhang");
        map_skill("sword","huifeng-jian");
        map_skill("parry","huifeng-jian");

        create_family("峨嵋派", 4, "弟子");

        setup();
        carry_object("/obj/weapon/sword")->wield();
        carry_object("/obj/armor/ni-cloth.c")->wear();
        carry_object("/obj/armor/ni-xie")->wear();
}
void init()
{
        add_action("do_kneel", "kneel");
}
void attempt_apprentice(object ob)
{
   if( (string)ob->query("class")!="bonze" )
   {
      command ("say 阿弥陀佛！贫尼不收弟子。\n");
      command ("say 你若想继续学峨嵋派的功夫，还是去找我俗家师妹吧。\n");
      return;
   }

   if( (string)ob->query("gender") != "女性" )
   {
      command ("say 阿弥陀佛！贫尼不收男弟子。施主若想学艺可去找我俗家师妹。");
      return;
   }
   if ((int)ob->query("mingwang") < 100)
   {
      command("say " + RANK_D->query_respect(ob) + "你行侠仗义之事还做的不够。");
      return;
   }
   if ((int)ob->query_skill("foxuexinde",1) <50)
   {
      command("say 你大乘佛法的修为还要提高些。");
      return;
   }
   command("say 阿弥陀佛，善哉！善哉！好吧，我就收下你了。");
   command("say 希望你能以慈悲之心，以智慧之力，努力行善，济度众生。");
   command("recruit " + ob->query("id"));
}

#include "tobebonze.h"
