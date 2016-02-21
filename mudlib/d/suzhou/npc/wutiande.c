// woodcutter.c
mapping	*quest=({
	([
		"id":"tufei",
		"name":"土匪",
	]),
});
inherit NPC;
string do_ask();
void create()
{
	set_name("吴天德",({"wu tiande","tiande","wu"}));
	set("nick_name","参将");
	set("gender", "男性" );
	set("age", 26);
	set("long","朝庭委任的官差，负责分派任务。\n");
	        set("inquiry", ([
		"任务":	(: do_ask :),
		"renwu":(: do_ask :),
]));
	setup();
	carry_object("/obj/cloth")->wear();
}
string do_ask()
{
	object me;
	mapping my_renwu;
	string id;
	int time;
	me=this_player();
	if(me->query("mingwang")<0)
	return RANK_D->query_respect(me)+"非我正道中人，还是另寻它处吧！\n";
	id=me->query("renwu_kill/id");
	if(id&&!me->query("renwu_kill/end")&&time()-me->query("renwu_kill/start_time")<me->query("renwu_kill/time")*60)
	return "你上次的任务还没完成吧？！\n";
	my_renwu=quest[random(sizeof(quest))];
	time=2+random(10);
	me->set("renwu_kill/id",my_renwu["id"]);
	me->set("renwu_kill/name",my_renwu["name"]);
	me->set("renwu_kill/time",time);
	me->set("renwu_kill/start_time",time());
	me->set("renwu_kill/end",0);
	return time+"分钟之内把"+my_renwu["name"]+"("+my_renwu["id"]+")"+"杀了！";
}
