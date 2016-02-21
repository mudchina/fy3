inherit NPC;

void create()
{
   set_name("Ðç¹·", ({ "dog"}) );
   set("race", "Ò°ÊÞ");
   set("age", 6);
   set("long", "»ëÉíÄ«ºÚ,È®ÑÀ°ëÂ¶,ºÃÒ»Ìõ·ÍÌìÈ®¡£\n");
   
   set("str", 25);
   set("cor", 24);
   set("combat_exp",25000);
   set("kee",800);
   set("max_kee",800);

   set("limbs", ({ "È®ÑÀ", "ÉíÌå", "Ç°×¦","ºó×¦","Î²°Í" }) );
   set("verbs", ({ "bite", "claw" }) );

   set_temp("apply/attack", 10);
   set_temp("apply/armor", 20);
   
   set("chat_chance",5);
   set("chat_msg",({
   "·ÍÌìÈ®ÍôÍô½ÐÁËÁ½Éù,±»ÕòÔÎÂäÏÂµÄ²ÔÓ¬µôÁËÒ»µØ.\n",
   "·ÍÌìÈ®¶Ô×ÅÄã×ÌÑÀßÖ³Ý,ÄãÒ»¿´,à¸,¶¼ÊÇÖûÑÀ.\n",
   }));

   setup();
}

void die()
{
  message_vision("$NÍôÍô--ÍôÍô½ÐÁËÒ»Õó,ÅÜ³öÊÒÍâÈ¥ÁË.\n",this_object());
  new(__DIR__"obj/quanya.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}