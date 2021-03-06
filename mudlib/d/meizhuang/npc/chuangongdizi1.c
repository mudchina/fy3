// master.c

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("大庄主传功弟子",({"dizi","di zi"}));
        set("gender", "男性" );
	set("age",20);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
	set("mingwang",1);
        set("int", 24);
    set("max_kee",600);
    set("eff_kee",600);
    set("kee",600);
    set("max_sen",300);
    set("eff_sen",300);
    set("sen",300);
    set("max_gin",300);
    set("eff_gin",300);
    set("gin",300);
	set_temp("apply/attack",50);
	set_temp("apply/defense",20);
    set_temp("apply/armor",20);
	set("max_force",500);
	set("force",500);
	set_skill("foxuexinde",40);
	set_skill("daoxuexinde",40);


        set("long",
                
	"黄钟公的得意门生，负责为新弟子传授武功。\n");

	create_family("孤山梅庄",2,"弟子");

	set("combat_exp",200000);
        set("score", 200000);


	set_skill("sword",60);
	set_skill("unarmed",60);
	set_skill("parry",60);
	set_skill("dodge",60);
	set_skill("force",60);
	set_skill("literate",40);
	set_skill("qixianwuxing-jian",60);
	set_skill("xuantian-neigong",60);
	set_skill("xuantian-bu",60);
	set_skill("xuantian-quan",60);
		map_skill("unarmed","xuantian-quan");
	map_skill("sword","qixianwuxing-jian");
		map_skill("force","xuantian-neigong");
		map_skill("dodge","xuantian-bu");
	map_skill("parry","qixianwuxing-jian");
        setup();
	carry_object("/obj/std/armor/tongjia")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
	carry_object(__DIR__"obj/zhujian")->wield();
	add_money("silver",50);
}

void attempt_apprentice(object ob)
{
        command("say 很好，" + RANK_D->query_respect(ob) + 
"多加努力，他日必定有成。\n");
        command("recruit " + ob->query("id") );
}

void recruit_apprentice(object ob)
{
        if( ::recruit_apprentice(ob) )
			ob->set("class","xiake");
}
void init()
{
        ::init();
        add_action("do_get","get");
}
int do_get(string str)
{
        string from;
        object me;
        me=this_player();
        if(!str)        return 0;
        if( sscanf(str,"%s from %s",str,from)==2)       {
        if(from=="bingqijia"&&me->query("family/family_name")!="孤山梅庄")  {
                command("say 不要动兵器架！\n");
                return 1;
        }
        }
        return 0;
}
