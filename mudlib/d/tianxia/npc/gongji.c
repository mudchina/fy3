inherit NPC;

void create()
{
   set_name("ÓÏ¼¦", ({ "qiblets"}) );
   set("race", "Ò°ÊÞ");
   set("age", 6);
   set("long", "ºì¹Ú½ð×ì,ÓðÃ«Ñ¤ÀÃ,Ë«×¦ËÆÌú¡£\n");
   
   set("str", 20);
   set("cor", 24);
   set("combat_exp",75000);
   set("kee",800);
   set("max_kee",800);

   set("limbs", ({ "¼â×ì", "ÉíÌå", "×¦×Ó","×ó³á","ÓÒ³á" }) );
   set("verbs", ({ "bite", "claw" }) );

   set_temp("apply/attack", 10);
   set_temp("apply/armor", 20);
   
   set("chat_chance",5);
   set("chat_msg",({
   "ÐÛ¼¦Õñ·Ü¾«Éñ,¶¶¶¯Ë«³á,Òý¾±³¤Ð¥:à¸~~~à¸~~~à¸~~~~.\n",
   "ÐÛ¼¦Å¬Á¦µØ´òÃù±¨Ïþ,È´ÌýÓÐÈËµÀ:ÕâÎÁ¼¦,ÀÏ°ëÒ¹¹í½Ð.\n",
   }));

   setup();
}

void die()
{
  message_vision("$NÆËÀâ×Å³á°òÉÈÁË¼¸ÏÂ,·É²»¶à¸ß¾ÍµôÏÂÀ´,Ë¤ÔÎÁË.\n",this_object());
  new(__DIR__"obj/yumao.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}