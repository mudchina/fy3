// music   yangzhou's µêĞ¡¶ş

inherit NPC;
inherit F_VENDOR;

void create()
{
        set_name("µêĞ¡¶ş", ({ "xiaoer", "xiao", "waiter","xiao er","er" }) );
        set("gender", "ÄĞĞÔ" );
        set("age", 20);
        set("long",
                "Ã¼ÇåÄ¿ĞãµÄĞ¡»ï¼Æ£¬ÕûÌìĞ¦ÎûÎûµÄ£¬Ã¦µÃ²»ÒàÀÖºõ¡£\n");
        set("mingwang",1);
        set("combat_exp", 1000);
        set("attitude", "friendly");
        set("rank_info/respect", "Ğ¡¶ş¸ç");

        set("vendor_goods", ([
                     "°ü×Ó":     __DIR__"obj/baozi",
                     "¾Æºø":     __DIR__"obj/jiuhu",
                     "¼¦ÍÈ":     __DIR__"obj/jitui",
                     "ÑÎË®¶ì" :  __DIR__"obj/yanshuie",
                     "»¨ÉúÃ×" :  __DIR__"obj/huashengmi", 
                             ]));


        set("inquiry", ([
              "zhongzhou": "ÄãÒ²ÊÇÖĞÖİÈË£¿Ì«ÇÉÁË£¬ÎÒÃÇÍ¬Ïç£¬Äã[1;33mÈ¥ÖĞÖİ[0;36mÂğ£¿[0;37m\n",
               "ÖĞÖİ":   "ÄãÒ²ÊÇÖĞÖİÈË£¿Ì«ÇÉÁË£¬ÎÒÃÇÍ¬Ïç£¬Äã[1;33mÈ¥ÖĞÖİ[0;36mÂğ£¿[0;37m\n",
        ]) );


        setup();

        carry_object("/obj/cloth")->wear();
        add_money("coin", 50);
}
void init()
{       
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
        add_action("do_vendor_list", "list");
}
void greeting(object ob)
{
if( !wizardp(ob) )
    {
        if( !ob || environment(ob) != environment() ) return;
      switch( (int) random(20)/10 ) {
                case 0:
                        say( "µêĞ¡¶ş´òÁ¿ÁË"+ob->query("name")+
   "Ò»»á£¬Ğ¦µÀ£ºÕâÎ»" + RANK_D->query_respect(ob)+ "£¬¿ÉÄÜ²»ÊÇ±¾µØÈË°É£¿\n");
                        break;
                case 1:
                        say( "µêĞ¡¶ş½«×ÀÒÎ×ĞÏ¸²ÁÁË²Á£¬ËµµÀ£ºÕâÎ»" + RANK_D->query_respect(ob)
                                + "£¬Çë×øÇë×ø¡£\n");
                       break;
                           }
      if ( ob->query("age") <18 )
            {
             say( 
"µêĞ¡¶ş´òÁ¿ÁË"+ob->query("name")+"Ò»»á£¬Ğ¦µÀ£ºÕâÎ»" + RANK_D->query_respect(ob)+ "£¬¿ÉÄÜ²»ÊÇ±¾µØÈË°É£¿\n");
            }      
      else {
            say( "µêĞ¡¶ş½«×ÀÒÎ×ĞÏ¸²ÁÁË²Á£¬ËµµÀ£ºÕâÎ»" + RANK_D->query_respect(ob)+ "£¬Çë×øÇë×ø¡£\n");
           }
   }
else
  {
  say("µêĞ¡¶şÂúÁ³¶ÑĞ¦µÀ: ÊÇ" + 
  ob->query("name")+RANK_D->query_respect(ob) + "À´À²£¿Çë×øÇë×ø.£¡\n");
      }
}
int accept_object(object who, object ob)
{
    
        if (ob->query("money_id") && ob->value() >= 100) 
        {
                tell_object(who, "Ğ¡¶şÒ»¹şÑü£¬ËµµÀ£º¶àĞ»ÄúÀÏ£¬Â¥ÉÏÓĞÇë¡£\n");
                who->set_temp("rent_paid",1);
                return 1;
        }
        return 0;
}
