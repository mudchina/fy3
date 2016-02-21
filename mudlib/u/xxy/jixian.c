// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// created 7/6/1997 by snowcat
#include <ansi.h>

inherit NPC;

object room = 0;

void create()
{
  set_name("���׼���", ({"ji xian", "xian" }));
  set("gender", "����");
  set("age", 60);
  set("per", 30);
  set("long", "һλ���Ű��׵ļ��ɡ�\n");
  set("combat_exp", 5000);
  set_skill("force", 50);
  set_skill("spells", 50);
  set_skill("unarmed", 50);
  set_skill("dodge", 50);
  set_skill("parry", 50);
  set("gin", 500);
  set("max_gin", 500);
  set("kee", 500);
  set("max_kee", 500);
  set("sen", 500);
  set("max_sen", 500);
  set("force", 150);
  set("max_force", 150);
  set("mana", 150);
  set("max_mana", 150);
  set("force_factor", 10);
  setup();
  carry_object("/d/obj/cloth/magua")->wear();
}

void init()
{
  ::init();
  add_action("do_fight", "fight");
  add_action("do_kill", "kill");
  if (room == 0)
    room = environment (this_object());
}

void refuse_message (object me, object who)
{
  message_vision ("$N˵���˶��ˣ����ǿ���������ȤЩ�ɡ�\n",me,who);
}

int do_fight(string arg)
{
  object who = this_player();
  object me = this_object();

  if (arg && present(arg,environment(who))==me)
  {
    message_vision ("$N������������ۣ�����$n��ܡ�\n",who,me);
    refuse_message (me,who);
    return 1;
  }
  return 0;
}

int do_kill(string arg)
{
  object who = this_player();
  object me = this_object();

  if (arg && present(arg,environment(who))==me)
  {
    message_vision ("$N������������ۣ���ɱ$n��\n",who,me);
    refuse_message (me,who);
    return 1;
  }
  return 0;
}