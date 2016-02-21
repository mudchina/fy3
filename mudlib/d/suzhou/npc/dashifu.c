// woodcutter.c

inherit NPC;

string* food=({
	"blxr",
	"xysh",
	"ssgy",
});
string* water=({
	"qingciwan",
	"zishahu",
	"baiyubei",
});
string do_func(int i);

void create()
{
	set_name("大师傅",({"da shifu","da","shifu"}));
	set("gender", "男性" );
	set("age",40);
	set("mingwang",1);
	set("long","金风庄的头把掌勺师傅，慕容氏弟子的吃、喝都由他负责。\n");
	set("combat_exp",30000);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	set_temp("apply/damdage",10);
	set_temp("apply/armor",30);
	set_skill("unarmed",50);
	set_skill("dodge",50);
	set("inquiry",([
		"吃" : (: do_func(1) :),
		"喝" : (: do_func(2) :),
        ]) );

	setup();
	carry_object("/obj/cloth")->wear();
}
string do_func(int i)
{
	object *inv,me,thing;
	string str,str2;
	int count;
	me=this_player();
	if(me->query("family/family_name")!="姑苏慕容")
	return "这儿只接待姑苏慕容的弟子。\n";
	inv=all_inventory(me);
	if(i==1) {
		thing=new(__DIR__"obj/"+food[random(sizeof(food))]+".c");
		str="food_remaining";
	str2="等吃完了再说罢。\n";
	}
	else	{
		thing=new(__DIR__"obj/"+water[random(sizeof(water))]+".c");
		str="max_liquid";
	str2="喝完了自己去灌。\n";
	}
	if(!sizeof(inv))	{
	thing->move(me);
	tell_object(me,"大师傅给你一"+thing->query("unit")+thing->query("name")+"。\n");
	return "这"+thing->query("unit")+thing->query("name")+"你拿去吧。\n";
	}
	for(count=0;count<sizeof(inv);count++)	{
		if(inv[count]->query(str))
	return "你身上不是有"+inv[count]->query("name")+"吗？"+str2;
	}
	thing->move(me);
	tell_object(me,"大师傅给你一"+thing->query("unit")+thing->query("name")+"。\n");
	 return "这"+thing->query("unit")+thing->query("name")+"你拿去吧。\n";
}
