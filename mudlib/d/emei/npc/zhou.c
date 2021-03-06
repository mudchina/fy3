// zhou.c 周芷若

#include <command.h>
#include <ansi.h>

inherit NPC;
inherit F_MASTER;
string do_jian();
int have_jian=1;
void create()
{
        set_name("周芷若", ({ "zhou zhiruo","zhiruo","zhou"}));
        set("long",
                "她是峨嵋派的第四代掌门弟子。\n"
                "一张脸秀丽绝俗。身着一身淡黄衣裳。\n"
                "略显清减的巧笑中带了些许无奈。\n"
                "她很寂寞。\n");
        set("gender", "女性");
        set("age", 20);
        set("attitude", "peaceful");
        set("shen_type", -2000);
        set("class", "fighter");
        set("str", 30);
        set("int", 30);
        set("con", 30);
        set("per", 30);

        set("max_kee", 3500);
        set("max_gin", 1000);
        set("force", 3500);
        set("max_force", 3500);
        set("force_factor", 20);
        set("max_sen", 1000);

        set("inquiry",([
"倚天剑":(:do_jian:),
  ]));
        set("combat_exp", 1500000);
        set("score", 1000);
        set_skill("foxuexinde", 80);
        set_skill("force", 100);
        set_skill("throwing", 100);
        set_skill("parry", 100);
        set_skill("unarmed", 100);
        set_skill("sword", 100);
        set_skill("literate", 100);
        set_skill("dodge", 100);
        set_skill("sixiang-zhang", 100);
        set_skill("anying-fuxiang", 100);
        set_skill("huifeng-jian", 100);
        set_skill("emei-xinfa", 100);
        map_skill("force","emei-xinfa");
        map_skill("dodge","anying-fuxiang");
        map_skill("unarmed","sixiang-zhang");
        map_skill("sword","huifeng-jian");
        map_skill("parry","huifeng-jian");
        create_family("峨嵋派", 4, "掌门弟子");

        setup();
        carry_object("/obj/weapon/sword")->wield();
        carry_object("/d/emei/obj/ycloth.c")->wear();
}

void init()
{
  add_action("do_agree","agree");
}
void attempt_apprentice(object ob)
{
    if (ob->query("gender")=="男性"&&ob->query("per")<25)  {
 command("say 先去照照镜子,这么丑陋的人最好别给我见到.\n");
    return;
    }
  if (ob->query("age")>35)   {
  command("say 你这么一把年纪,我看着就不舒服,还不快走.\n");
  return;
   }
  if (ob->query("gender")=="女性"&&ob->query("per")>20)  {
  command("say 你这么年轻美丽,为什么不去找赵敏那个小贱人.\n");
  return;
    }
 command("recruit "+ob->query("id"));
 return;
}
string do_jian()
{
 object ob;
 ob=this_player();
if (have_jian==0) return "可惜你来晚了,剑已经给人拿走了.\n";
if (find_object("/obj/weapon/yitianjian")) return "此剑已经流落江湖,不知去向了.\n";
if (ob->query("max_force")>500)   {
ob->set_temp("wait_ytj",1);   
return "我可以把依天剑给你,但需要你的一些内力来增加它的煞气,你可愿意(agree)?\n";
   }
if (ob->query("max_kee")>300)   {
ob->set_temp("wait_ytj",2);
return "我可以把依天剑给你,但需要你的一些气来增加它的煞气,你可愿意(agree)?\n";
  }
return "你的内力不深厚,气又不够长,一无是处,我不能把剑给你.\n";
}
int do_agree()
{
 object ob;
 int i;
 ob=this_player();
 if (!ob->query_temp("wait_ytj"))  {
 command("say 你同意,同意什么?我不懂你的意思!\n");
 return 1;
  }
 i=1+random(6);
 if (ob->query_temp("wait_ytj")==1)  {
 ob->set("max_force",ob->query("max_force")-i);
 new("/obj/weapon/yitianjian")->move(ob);
 message_vision("$N从身后剑鞘中取出依天剑给$n.\n",this_object(),ob);
 tell_object(ob,"你的最高内力下降了"+i+"点.\n");
 ob->delete_temp("wait_ytj");
 have_jian=0;
 return 1;
 }
 i=1+random(3);
 if (ob->query_temp("wait_ytj")==2)  {
  ob->set("max_kee",ob->query("max_kee")-i);
  new("/obj/weapon/yitianjian")->move(ob);
 message_vision("$N从身后剑鞘中取出依天剑给$n.\n",this_object(),ob);
 tell_object(ob,"你的最高气的值下降了"+i+"点.\n");
 ob->delete_temp("wait_ytj");
 have_jian=0;
 return 1;
 }
 return 0;
}
