inherit NPC;
inherit F_MASTER;

void create()
{
    set_name("明镜",({"ming jin","heshang"}));
    set("gender","男性");
    set("shen_type",1);
    set("age",56);
    set("combat_exp",150000);
    set("long","峨嵋一派弟子!\n");
    
    set_skill("dodge",120);
    set_skill("unarmed",120);
    set_skill("parry",120);
    set_skill("force",120);
    set_skill("literate",120);
    set_skill("sixiang-zhang",120);
    set_skill("emei-xinfa",120);
    set_skill("anying-fuxiang",120);
    set_skill("huifeng-jian",120);

    map_skill("dodge","anying-fuxiang");
    map_skill("unarmed","sixiang-zhang");
    map_skill("parry","sixiang-zhang");
    map_skill("sword","huifeng-jian");

    create_family("峨嵋派",6,"弟子");
    set("inquiry",([
       "name":"贫僧明镜,自幼出家峨嵋.\n",
       "here":"此处乃峨嵋下院,伏虎寺.\n",
     ]));
   setup();
   }
void attempt_apprentice(object me)
{
    if (me->query("family/family_name")=="峨嵋派")
 {
     command("say 善哉,善哉,你我已是同门,何来拜师之说!\n");
      return;
 }
  if (me->query("gender")=="女性")
{
    command("say 阿弥佗佛,罪过,罪过,女施主不要说笑!\n");
    return;
}
if (me->query_skill("emei-xinfa",1)<50) {
command("say 你的峨嵋心法还不到家呀,再练练吧!\n");
return;
}
  command("say 即入我门,四大皆空,汝须紧记.\n");
  command("recruit "+me->query("id"));
return;
}
void recruit_apprentice(object ob)
{
        if( ::recruit_apprentice(ob) )
			ob->set("class","xiake");
}
