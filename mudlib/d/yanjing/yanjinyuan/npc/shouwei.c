#include <ansi.h>
inherit NPC;
void create()
{
set_name("守门卫士",({"wei shi"}));
set("long","威风凛凛的卫士，身材高大，站立地笔直不动.\n");
set("age",20+random(20));
set("combat_exp",100000+random(900000));
set("food",300);
set("water",300);
set("force_factor",20);
set_skill("unarmed",20+random(50));
set_skill("tiexue-spear",30+random(50));
map_skill("parry","tiexue-spear");
map_skill("spear","tiexue-spear");
set_skill("spear",50+random(50));
set_skill("dodge",50+random(50));
set_skill("force",50+random(50));
set("force",500);
set_skill("parry",50+random(50));
set("max_force",500);
setup();
carry_object("/obj/std/armor/tiejia")->wear();
carry_object("/obj/std/armor/tiekui")->wear();
carry_object("/obj/std/armor/tiexue")->wear();
carry_object("/obj/weapon/tiespear")->wield();
}
int accept_fight(object who)
{
command("say 公务在身，不便奉陪。\n");
return 0;
}
