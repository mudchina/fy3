inherit NPC;

void create()
{
   set_name("辰龙", ({ "dragon"}) );
   set("race", "野兽");
   set("age", 200);
   set("long", "神话中的龙,右爪中抓着颗明珠。\n");
   
   set("str", 30);
   set("cor", 24);
   set("combat_exp",85000);
   set("kee",800);
   set("max_kee",800);

   set("limbs", ({ "头部", "身体", "尾巴", "左前爪","右前爪" "左后爪","右后爪" }) );
   set("verbs", ({ "bite", "claw" }) );

   set_temp("apply/attack", 20);
   set_temp("apply/armor", 40);
   
   set("chat_chance",5);
   set("chat_msg",({
   "璃龙身形微动,全身冒起一股云烟.\n",
   "璃龙把脑袋凑近你,闻了闻,恶心地吐了吐舌头.\n",
   }));

   setup();
}

void die()
{
  message_vision("$N身子在空中一盘,一团雾气弥漫了石室.\n",this_object());
  new(__DIR__"obj/longlin.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}