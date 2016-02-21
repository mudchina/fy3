inherit NPC;
void create()
{
   set_name("察合台",({"cha hetai"}));
   set("gender","男性");
   set("long","铁木真的二儿子,生性粗鲁,两颗獠牙露在嘴唇外!\n");
   set("mingwang",-15000);
   set("combat_exp",600000);
   set("area_name","蒙古草原");
   
   set("age",34);
   set("kee",1000);
   set("max_kee",1000);
   set("food",250);
   set("water",250);
   set("force",800);
   set("max_force",800);
   set("force_factor",40);
   
   set("chat_chance",5);
   set("chat_msg",({
  "我总看不顺眼拖雷这小子，老跟我作对。\n",
  "郭靖这傻小子居然还有人喜欢，老子早晚要把他杀了.\n",
  }));

   set_skill("dodge",100);
   set_skill("force",100);
   set_skill("parry",100);
   set_skill("unarmed",100);
   set_skill("spear",100);

   setup();
   add_money("silver",20);
carry_object("/obj/cloth")->wear();
carry_object("/d/obj/weapon/spear/yinqiang")->wield();
}
void init()
{
        object area;
        area=new("/obj/area");
	area->create(query("area_name"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
}