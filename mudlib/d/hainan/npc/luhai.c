#include <ansi.h>
inherit NPC;

int give_chuan();

void create()
{
  set_name(YEL"陆海"NOR, ({"lu hai", "lu"}));
  set("gender", "男性");
  set("age", 76);
  set ("title","<被铁链锁住的>  "+YEL"长离一枭"NOR);
  set("attitude", "friendly");
  set("combat_exp", 150000);
  set("per", 25);
  set_skill("dodge", 60);
  set("max_sen",600);
  set("max_gee",600);
  set("max_gin",600);
  set("force",800);
  set("max_force",800);
  set("force_factor",25);
  set_skill("unarmed",60);
  set_skill("parry",60);
  set_skill("dodge",60);
  setup();

  set("inquiry", ([
       "here": "鬼知道这是什么地方,老尼姑把老子一锁就是三十年,真他奶奶的。\n",
       "青龙碧雪玉": (: give_chuan :),
       "出去": "要不是给这鬼链锁住了,老子还会呆在这里么?\n",
       "铁链": "这铁链用海底寒铁所铸,只有老虔婆的寒月斩才能斩断。\n",
       "老虔婆":"除了梵音那个老尼姑外,还有谁?\n",
       "寒铁链":"这铁链用海底寒铁所铸,只有老虔婆的寒月斩才能斩断.\n",
      ]));
}

int give_chuan()
{
  object me = this_object();
  object who = this_player();
message_vision("$N对$n嘿嘿一阵冷笑,谁能给我把这劳什子铁链给断了,玉佩奉送!\n",me,who);
return 1;
} 
