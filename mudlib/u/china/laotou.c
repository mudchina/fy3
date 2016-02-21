inherit NPC;
#include <ansi.h>;
int ask_con();
int ask_kar();
int ask_spi();
int ask_int();
void create()
{
        set_name("算命先生", ({ "laotou"}) );
        set("gender", "男性" );
        set("title",MAG"赛半仙"NOR);
        set("age", 62);
        set("long",
"算命的老头，可以一眼看出你的天赋.\n");
        set("inquiry",  ([
                "悟性" : (: ask_int :),
                "福缘" : (: ask_kar :),
                "根骨" : (: ask_con :),
"算命" : "要算命就找我呀!不知你想问悟性?福缘?根骨?灵性?",
                "灵性" : (: ask_spi :),
        ]) );
        set("combat_exp", 500);
        set("attitude", "friendly");
        set("chat_msg", ({
                "老头揉了揉鼻子。。。\n",
        }) );
        setup();
        carry_object("/obj/cloth")->wear();
}

int accept_object(object me,object obj)
{
       if(this_object()->is_busy())
       {
       command("say 请稍候,我正忙着呢!");
       return 0;
       }
       if(query(me->query("id")))
       {
       command("say 已经收过你的钱了,你要看 悟性 福缘 根骨 灵性 中的哪一项?");
       return 0;
       }
       if(!(string)obj->query("money_id")||(string)obj->query("money_id")!="gold")
       {
       command("say 相金请用金子支付!");
       return 0;
       }
       if((int)obj->value() < 20000 )
       {
      say(CYN+name()+"皮笑肉不笑的说道: 您出手也太小器了吧!\n"NOR);
       return 0;
       }
       command("nod "+me->query("id"));
       command("say 好,相金我收下了,你要看哪一项啊?");
       set(me->query("id"),1);
       return 1;
}

int ask_int()
{
        object me;
        me = this_player();
       if(this_object()->is_busy())
       {
       command("say 请稍候,我正忙着呢!");
       return 1;
       }
      if(!query(me->query("id")))
        {
        command("say 老汉我也要养家糊口啊,是不是先给点相金呢!");
        return 1;
        }
        delete(me->query("id"));
       this_object()->start_busy(2);
        if (me->query("int") >= 30)
        {
        command("say 你的悟性很高嘛！");
        return 1;
        }
        if (me->query("int") >= 20 && me->query("int") < 30)
        {
        command("say 你的悟性还不错。");
        return 1;
        }
        if (me->query("int") > 10 && me->query("int") < 20)
        {
        command("say 你的悟性一般。");
        return 1;
        }
        if (me->query("int") <= 10 )
        {
        command("say 我没见过你这么笨的人！");
        return 1;
        }
        return 1;
}
int ask_kar()
{
        object me;
        me = this_player();
       if(this_object()->is_busy())
       {
       command("say 请稍候,我正忙着呢!");
       return 1;
       }
      if(!query(me->query("id")))
        {
        command("say 老汉我也要养家糊口啊,是不是先给点相金呢!");
        return 1;
        }
        delete(me->query("id"));
       this_object()->start_busy(2);
        if (me->query("kar") >= 30)
        {
        command("say 你的福缘很高嘛！");
        return 1;
        }
        if (me->query("kar") >= 20 && me->query("kar") < 30)
        {
        command("say 你的福缘还不错。");
        return 1;
        }
        if (me->query("kar") > 10 && me->query("kar") < 20)
        {
        command("say 你的福缘一般。");
        return 1;
        }
        if (me->query("kar") <= 10 )
        {
          command("say 你比刘备还背！！");
        return 1;
        }
        return 1;
}
int ask_spi()
{
        object me;
        me = this_player();
       if(this_object()->is_busy())
       {
       command("say 请稍候,我正忙着呢!");
       return 1;
       }
      if(!query(me->query("id")))
        {
        command("say 老汉我也要养家糊口啊,是不是先给点相金呢!");
        return 1;
        }
        delete(me->query("id"));
       this_object()->start_busy(2);
        if (me->query("spi") >= 30)
        {
        command("say 你的灵性很高嘛！");
        return 1;
        }
        if (me->query("spi") >= 20 && me->query("spi") < 30)
        {
        command("say 你的灵性还不错。");
        return 1;
        }
        if (me->query("spi") > 10 && me->query("spi") < 20)
        {
        command("say 你的灵性一般。");
        return 1;
        }
        if (me->query("spi") <= 10 )
        {
        command("say 我要是告诉你1+1=2，你能知道1+2=?吗？");
        return 1;
        }
        return 1;
}
int ask_con()
{
        object me;
        me = this_player();
       if(this_object()->is_busy())
       {
       command("say 请稍候,我正忙着呢!");
       return 1;
       }
      if(!query(me->query("id")))
        {
        command("say 老汉我也要养家糊口啊,是不是先给点相金呢!");
        return 1;
        }
        delete(me->query("id"));
       this_object()->start_busy(2);
        if (me->query("con") >= 30)
        {
        command("say 你的根骨很高嘛！");
        return 1;
        }
        if (me->query("con") >= 20 && me->query("spi") < 30)
        {
        command("say 你的根骨还不错。");
        return 1;
        }
        if (me->query("con") > 10 && me->query("spi") < 20)
        {
        command("say 你的根骨一般。");
        return 1;
        }
        if (me->query("con") <= 10 )
        {
        command("say 你体弱多病，我看你活不长了。。");
        return 1;
        }
        return 1;
}

int accept_fight(object me)
{
        command("say 你什么人啊！一个算命的老头你也欺负！！");
        return 0;
}

