inherit NPC;
void create()
{
   set_name("°×º®·ã",({"bai hanfeng"}));
   set("gender","ÄĞĞÔ");
	set("shen_type",1);
   set("age",24);
   set("combat_exp",150000);
   set("force",600);
   set("max_force",600);
   set("force_factor",20);
   
   set("chat_chance",4);
   set("chat_msg",({
  "°×º®·ãÔÚÁéÇ°¿ŞµÀ:¸ç¸çÄãËÀµÃºÃ²Ò,ĞÖµÜÒªÎªÄã±¨³ğ.\n",
  "°×º®·ãÅ­µÀ:¾ÍÊÇÌìµØ»áÄÇ°ï¹·Ôô.\n",
  }));
   set_skill("unarmed",35);
   set_skill("parry",35);
   set_skill("dodge",35);
   set_skill("blade",35);
   set_skill("anying-fuxiang",35);
   set_skill("wuhu-duanmendao",35);
   set_skill("tiangang-zhi",35);
   map_skill("parry","tiangang-zhi");
   map_skill("dodge","anying-fuxiang");
   map_skill("blade","wuhu-duanmendao");
   setup();
   add_money("silver",20);
   carry_object("/obj/cloth")->wear();
 }
 
