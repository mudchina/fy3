// Room: /d/suzhou/npc/gongdetading.c
#include <ansi.h>
inherit ROOM;
string* something=( {
	"miaofajing1",
	"miaofajing2",
	"miaofajing3",
	"miaofajing4",
	"nidao",
	"zhuding"
});
void create()
{
	set("short", "功德塔顶");
	set("long", @LONG
塔顶上一个铁制的塔刹，约占全塔的四分之一左右，比例之大在塔中极为罕
放眼四周，苏州城美景尽在眼底。
LONG
	);
	set("no_clean_up", 0);
	set("objects",([
		__DIR__"obj/"+something[random(sizeof(something))] :1,
		__DIR__"obj/"+something[random(sizeof(something))] :1,
	]));
	set("outdoors","suzhou");
	setup();
}
void init()
{
	object me;
	me=this_player();
	call_out("greeting",0,me);
	add_action("do_jump","jump");
}
void greeting(object ob)
{
	int kee,eff_kee;
	if(random(ob->query_skill("dodge"))<20)	{
		message_vision("$N突然脚下一滑，从塔上直摔了下去！\n叭叽，$N摔了个狗啃屎！\n",ob);
		tell_room("/d/suzhou/gongdeta",ob->query("name")+"从塔顶直摔了下来！\n叭叽，"+ob->query("name")+"摔了个狗啃屎！\n");
	eff_kee=ob->query("eff_kee");
	kee=ob->query("kee");
	eff_kee=eff_kee-10;
	kee=kee-15;
	ob->set("eff_kee",eff_kee);
	ob->set("kee",kee);
	ob->improve_skill("dodge",random(30),1);
		ob->move("/d/suzhou/gongdeta");
	if(kee<0||eff_kee<0)	{
	message("channel:rumor",YEL +"【谣言】"+ "某人："+ob->query("name")+"摔死了。\n"NOR,users());
	ob->die();
	}
		return;
		}
}
int do_jump()
{	object me;
	int kee,eff_kee;
	me=this_player();
	if(random(me->query_skill("dodge"))<30)	{
		message_vision("$N施展轻身功夫纵跃而下。\n谁知脚下一个不稳，叭叽摔了个狗啃屎！\n",me);
		tell_room("/d/suzhou/gongdeta",me->query("name")+"从塔顶跃了下来。\n谁知脚下一个不稳，叭叽摔了个狗啃屎！\n");
	eff_kee=me->query("eff_kee");
	kee=me->query("kee");
	eff_kee=eff_kee-10;
	kee=kee-15;
	me->set("eff_kee",eff_kee);
	me->set("kee",kee);
	me->improve_skill("dodge",random(30),1);
		me->move("/d/suzhou/gongdeta");
	if(kee<0||eff_kee<0)	{
	message("channel:rumor",YEL +"【谣言】"+ "某人："+me->query("name")+"摔死了。\n"NOR,users());
	me->die();
	}
		return 1;
		}
	message_vision("$N施展轻身功夫纵跃而下。\n稳稳的站住了。\n",me);
	tell_room("/d/suzhou/gongdeta",me->query("name")+"从塔顶跃了下来。\n稳稳的站住了。\n");
	me->move("/d/suzhou/gongdeta");
	return 1;
}
