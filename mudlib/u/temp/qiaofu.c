//make by yx
//qiaofu.c

inherit NPC;
#include <ansi.h>
void create()
{
set_name("���ﷷ��",({"fanzi","fanzi"}) );
set("gender", "����");
set("long",
    "������ӿ����������ص�һ��ѽ��\n");
set("age", 35);
set("shen_type",1);
set("attitude", "friendly");
set("str", 25);
set("int", 25);
set("con", 30);
set("dex", 30);
set("inquiry",([
            "����" : "һcoin ��100gold",
            "��·" : "�� �� ��",
            "��ȥ" : "�� �� ��",
]) );
setup();
}
int accept_object(object who, object ob)
{
      object obb;
     if ((int)who->query_temp("liwu")==1)
       return 1;
   
     if (ob->query("money_id") && ob->value() >= 1)
      {
 message_vision("����ü����Ц�Ķ�$N ˵ ��͸������� \n", who)
//     this_player()->move("/d/working/yixiang/zhudao3");
     obb = new(__DIR__"100gold");
     obb->move(this_player());
message_vision("���Ӷ�$N˵:��õ��������� \n", who);
     who->set_temp("liwu",1);
     return 1;
      }
     else
       message_vision("���Ӷ�$N˵���⣬��Ҳ̫С�����ˡ�\n", who);
      return 1;
}
