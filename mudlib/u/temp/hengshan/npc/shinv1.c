//make by temp

//shinv.c

inherit NPC;
string ask_me();
void create()
{
set_name("阿芥",({"a jie","jie"}) );
set("title","恒山派俗家弟子");
set("gender", "女性");
set("age", 15);
set("shen_type",1);
set("attitude", "peaceful");
set("str", 25);
set("int", 25);
set("con", 30);
set("dex", 30);
set("qi", 800);
set("max_qi", 800);
set("jing", 500);
set("max_jing", 500);
set("neili", 1000);
set("max_neili", 1000);
set("jiali", 20);
set("combat_exp", 100000);
set("score", 10000);
set_skill("force", 100);
set_skill("unarmed", 100);
set_skill("dodge", 100);
set_skill("parry", 100);
set_skill("hand",100);
set_skill("strike", 100);
create_family("恒山派", 15, "弟子");
set("chat_chance", 10);
set("chat_msg", ({
"阿芥叹了口气说道：哎 我好想去看看我的父亲呀。\n",
"阿芥说道：恒山可真好呀，我好喜欢这呀！\n",
        }));
set("inquiry",([
            "亲人" : (: ask_me :),
            "家人" : (: ask_me :),
]));
setup();
}
string ask_me()
{
   object ob;
    ob = this_player();
   tell_object(ob,"tempp is "+(query("find_count"))+"\n");
   if (query("find_count")<1) set("find_count",1);
   if (query("find_count") >  1)
                return "我已经摆脱别人去找了，谢谢你的好意呀。";
   tell_object(ob,"tempp is "+(query("find_count"))+"\n");

    if (ob->query_int()>=30)
    {
        ob->set_temp("find/父亲",1);
        set("find_count", 2);
        return "真的谢谢你了，请你一定要帮我找到我的父亲呀。\n" ;

    }
    else
    
        return "你真的找的到吗？\n";
    
    
}
