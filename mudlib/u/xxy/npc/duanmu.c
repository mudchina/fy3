inherit NPC;
inherit F_VENDOR;
void create()
{
     set_name("¶ËÄ¾Á¼Ó¹",({"duanmu","laoban"}));
     set("gender","ÄÐÐÔ");
   set("shen_type",1);
     set("age",43);
     set("combat_exp",100000+random(200000));
     set("str",17);
     set("per",32);
     set_skill("unarmed",45);
     set_skill("parry",45);
     set_skill("dodge",45);
     set("vendor_goods",([
           "guijia":__DIR__"obj/guijia",
      ]));
     setup();
     carry_object("/obj/cloth")->wear();
     add_money("silver",80);
}
void init()
{
    ::init();    
     add_action("do_vendor_list","list");
}
