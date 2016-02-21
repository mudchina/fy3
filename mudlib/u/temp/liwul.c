//make by yx
//99.9.5
//qiaofu.c

inherit NPC;
#include <ansi.h>
void create()
{
set_name("礼物贩子",({"fanzi","fanzi"}) );
set("gender", "男性");
set("long",
    "这个贩子看起来很神秘的一样呀。\n");
set("age", 35);
set("shen_type",1);
set("attitude", "friendly");
set("str", 25);
set("int", 25);
set("con", 30);
set("dex", 30);
set("chat_chance", 20);
set("chat_msg", ({
    "我是快乐的礼物使者。\n",
    "我要送礼物了。\n",
                (: random_move :)
        }) );
set("inquiry",([
            "礼物" : "一coin 换100gold",
            "道路" : "恩 恩 恩",
            "出去" : "恩 恩 恩",
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
     message_vision("贩子眉开眼笑的对$N说：谢了，这就给你 \n", who);
     obb = new(__DIR__"100gold");
     obb->move(this_player());
     message_vision("贩子对$N说:你得到了礼物了 \n", who);
     who->set_temp("liwu",1);
     return 1;
      }
     else
       message_vision("贩子对$N说：这，你也太小看人了。\n", who);
      return 1;
}

