//make by temp
//qiaofu.c

inherit NPC;
string ask_me();
void create()
{
set_name("樵夫",({"qiao fu","fu"}) );
set("gender", "男性");
set("long",
    "这个樵夫看起来很熟悉这里呀。\n");
set("age", 35);
set("shen_type",1);
set("attitude", "friendly");
set("str", 25);
set("int", 25);
set("con", 30);
set("dex", 30);
set("chat_chance", 20);
set("chat_msg", ({
    "我从小就在这山里打柴，对这里我没有不熟的。\n",
    "哎,其实我也有个女儿的不过,不知道什么时候失散了，我好想她呀。\n",
                (: random_move :)
        }) );
set("inquiry",([
            "下山" : "恩 恩 恩",
            "道路" : "恩 恩 恩",
            "出去" : "恩 恩 恩",
            "女儿" : (: ask_me :),
]) );
setup();
}
string ask_me()
{
    object ob;
    ob=this_player();
    if ((int)ob->query_temp("find/父亲")==1)
   {
      say( "樵夫：谢谢你呀， 我终于找到我的女儿了，真是天意呀。\n");
      say( "樵夫：这为大侠，请收下我的礼物吧，以表我的心意。\n");
      new(__DIR__"obj/book-stone")->move(ob);
      tell_object(ob,"樵夫从材堆中抽出一个石板送给了你。\n");
      ob->set_temp("find/父亲",0);
  
      return "谢谢你了";
   }
   else
    return "是呀，我本来也有个女儿的，但是她去了哪呀?" ;
}