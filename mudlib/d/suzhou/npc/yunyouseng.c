// music   yangzhou's 店小二

inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/咕噜拉玛"; }

void create()
{
#include <kzznpc.h>
        set("long",
        "外地的云游和尚，年纪虽轻但已饱经风尘。\n");
        set("attitude","hero");
        set_temp("apply/defense",30);
        set_temp("apply/attack",40);
	setup();
	carry_object(__DIR__"obj/qingbusengyi")->wear();
	carry_object(__DIR__"obj/jiedao")->wield();
	add_money("silver",10);
}
int accept_fight(object me)
{
	command("haha");
	command("say 此番来中原正是要和中原高手一较高下。\n");
return 1;
}
