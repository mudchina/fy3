#include <ansi.h>
inherit NPC;
string *menpai=({"武当派","峨眉派","雁荡派","明教","姑苏慕容","幽冥教",
"南海剑派","浣花剑派","天下一家店","野羊寨","梅庄","昆仑派"});
#include "bangzhu.h"
void create()
{
        set_name("李沉舟", ({ "li","li chengzhou"}));
            set("gender", "男性" );
        set("title","权力帮帮主");
        set("age", 25+random(10));
        set("banghui","权力帮");
        set("combat_exp", 600+random(400));
        set("attitude", "friendly");
        set_skill("dodge", 10);
        set_skill("unarmed", 10);
        set("inquiry",([
                  "入帮":(:ask_jiaru:),
                  "加入":(:ask_jiaru:),
                  "jiaru":(:ask_jiaru:),
                  "join":(:ask_jiaru:),
                  "权力帮":"我权力帮人多势众,掌握天下!\n",
                  "rank":(:re_rank:),
                  "renwu":(:ask_renwu:),
        ]));
  enable_commands();
        setup();
carry_object("/obj/armor/cloth")->wear();
        add_money("coin", 30+random(20));
}
string check_player()
{
   int num;
   (int)num=ob->query("combat_exp");
   if (num<10000) return "帮众";
   if (num<50000) return "副香主";
   if (num<100000) return "香主";
   if (num<200000) return "副坛主";
   if (num<300000) return "坛主";
   if (num<500000) return "副堂主";
  if (num<800000) return "堂主";
  if (num<1000000) return "护法";
  if (num<1200000) return "总护法";
  if (num<1400000) return "人魔";
  if (num<1600000) return "地魔";
  if (num<1800000) return "天魔";
  else return "神魔";
 return;
}
