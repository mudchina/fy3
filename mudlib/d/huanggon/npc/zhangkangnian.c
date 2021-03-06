inherit NPC;
void create()
{
  set_name("张康年",({"zhang kangnian","zhang"}));
  set("gender","男性");
  set("nickname","御前侍卫");
  set("age",43);
  set("combat_exp",200000);
  set("force",300);
  set("force_factor",24);
  set("chat_chance",3);
  set("chat_msg",({
  "张康年道:老子运气不好,昨晚被刺客砍了一刀.\n",
  "张康年道:刺客的刀剑上都有[大明山海关总兵吴]的字样.\n",
  "张康年道:桂公公在皇上面前美言几句,我们就发啦.\n",
  }));
  
  set_skill("dodge",30);
  set_skill("parry",30);
  set_skill("blade",30);
  set_skill("unarmed",30);
  set_skill("wuhu-duanmendao",30);
  set_skill("huashan-quanfa",30);
  map_skill("blade","wuhu-duanmendao");
  map_skill("parry","huashan-quanfa");
  map_skill("unarmed","huashan-quanfa");
  setup();
  carry_object("/obj/std/armor/pijia")->wear();
  carry_object("/obj/weapon/blade")->wield();
  add_money("silver",30);
 }
#include "shiwei.h"
