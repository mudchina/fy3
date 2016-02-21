inherit KZZNPC;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/念真和尚"; }
void create()
{
#include <kzznpc.h>

	set("area_name","泉州开元寺");
	set("area_file","/d/quanzhou/daxiong.c");
	set("ziyuan","香油");
	set("jizhi",15);
	set("kaifa",50);

	set("chat_chance", 10);
        set("chat_msg", ({
                "这位施主宅心仁慈,还请布施一二!\n",
                "色即是空,空即是色,阿弥佗佛!\n",
                             "佛说:我不入地狱,谁入地狱!真乃大智大慧.\n",
                             "本寺自建成以来,历三百年而不毁,自是我佛保佑!\n",
        }) );
        set("long", "佛学经典精通的方丈大师.。\n");
        setup();
        
carry_object("/obj/armor/jiasha")->wear();
add_money("silver",10);
}
int accept_object(object who,object item)
{
  command("nod");
   command("say 有所作,有所报,多谢这位施主!\n");
	if((string)item->query("money_id"))
		"/cmds/adm/ctom.c"->save_money(this_object(),(int)item->value());

   return 1;
}
#include <die.h>