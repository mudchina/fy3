inherit NPC;

void create()
{
   set_name("巳蛇", ({ "snake"}) );
   set("race", "野兽");
   set("age", 100);
   set("long", "一条巨大的蟒蛇,在室中缓缓游动。\n");
   
   set("str", 20);
   set("cor", 24);
   set("combat_exp",55000);
   set("kee",900);
   set("max_kee",900);

   set("limbs", ({ "头部", "身体", "尾巴", "舌头"}) );
   set("verbs", ({ "bite"}) );

   set_temp("apply/attack", 10);
   set_temp("apply/armor", 20);

   set("chat_chance",5);
   set("chat_msg",({
   "巨蟒把身体盘成一团,顿时你面前出现一座小山.\n",
   "巨蟒的脑袋不住摆动,红色的蛇信发出索索的声音.\n",
   }));
   setup();
}

void die()
{
  message_vision("$N僵直的身体向后一倒,死了.\n",this_object());
  new(__DIR__"obj/longyan.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}