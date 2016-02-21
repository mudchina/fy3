#include <ansi.h>
inherit NPC;
void create()
{
    set_name("冷传云",({"leng chuanyun"}));
    set("gender","男性");
    set("age",54);
    set("long","三十年前，[阴煞双凶]是横行绿林的大盗，
    自从投入幽冥一门以来，不再出现江河。\n");
    set("title",YEL"地煞"NOR);
    set("combat_exp",800000);
    set("kee",800);
    set("max_kee",800);
    set("force",800);
    set("max_force",800);
    set("force_factor",25);
    set("food",200);
    set("water",200);
    
    set("inquiry",([
    "幽冥山庄":"你现在呆的地方就是了。\n",
    "道心种魔大法":"我门中无上大法，可惜早几代就失传了.\n",
    ]));
    
        set("shen_type",-1);
    set("chat_chance",3);
    set("chat_msg",({
    CYN"冷传云小心的拿出一截手指,细细的品味着.\n"NOR,
    CYN"冷传云冷冷的看着你,眼珠子老半天都不转动.\n"NOR,
    CYN"冷传云身形微微一转,你面前现出五六个影子。\n"NOR,
    }));
    
    set_skill("dodge",80);
    set_skill("parry",80);
    set_skill("unarmed",80);
    set_skill("force",80);
    set_skill("literate",20);
    set_skill("guiyingmizong",50);
    set_skill("jiuyou-xinfa",50);
    set_skill("youming-zhang",50);
    
    map_skill("dodge","guiyingmizong");
    map_skill("unarmed","youming-zhang");
    map_skill("parry","youming-zhang");
    map_skill("force","jiuyou-xinfa");
  
    setup();
    add_money("silver",5);
 }
void init()
{
  object ob;
  ::init();
  if (interactive(ob=this_player())&&!is_fighting())  {
  	remove_call_out("greeting");
  	call_out("greeting",1,ob);
     }
  }
void greeting(object ob)
{
   if (!ob||environment(ob)!=environment())  return;
   if (ob->query("family/family_name")!=RED"幽冥山庄"NOR) {
   command("guard out");
   	return;
     }
command("guard cancel");
return;
}
