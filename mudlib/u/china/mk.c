inherit ITEM;
mapping data=([
	"name":"",
	"id":"",
	"skills_lv":0,
	"exp_lv":0,
	"max_zc":0,
	"zz":0,
	"weapon":"",
	"skills":([]),
	"title":"",
	"nickname":"",
	"gender":"",
	"age":0,
	"jiali":0
]);

//inherit ITEM;

int do_setnpc();

void create()
{
        set_name("可征招NPC编辑器", ({ "mknpc", "maker" }) );
        set_weight(100);
	set("long","使用make进行数据设定，使用write命令进行数据存盘。\n");
        set("unit", "个" );
	setup();
}

void init()
{
	add_action("do_step1","make");
	add_action("do_save","write");
}


int do_step1()
{
//reset data
data=([
	"name":"",
	"id":"",
	"skills_lv":0,
	"exp_lv":0,
	"max_zc":0,
	"zz":0,
	"weapon":"",
	"skills":([]),
	"title":"",
	"nickname":"",
	"gender":"",
	"age":0,
	"jiali":0
]);

	write("请输入可征招NPC的中文名：");
	input_to("do_step2");
	return 1;
}

int do_step2(string arg)
{
	if(arg=="")	{
		write("请输入可征招NPC的中文名：");
		input_to("do_step2");
		return 1;
	}
	else if(arg==".")	{
		write("取消本次操作。\n");
		return 1;
	}

	if(file_size("/data/npc/"+arg+".o")!=-1)	{
		write("发现重名的可征招NPC文件。\n");
		write("为了保证可征招NPC的唯一性，请仔细检查是否重名。\n");
		write("如果是对原NPC文件进行修改，\n请先将/data/npc/"+
		data["name"]+".o删除后再进行此操作。\n");
		return 1;
	}
	data["name"]=arg;
	write("请输入可征招NPC的英文ID：");
	input_to("do_step3");
	return 1;
}

int do_step3(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	else if(arg=="")	{
		write("请输入可征招NPC的英文ID：");
		input_to("do_step3");
		return 1;
	}
	data["id"]=arg;
	write("请输入性别（1：男，2：女）：");
	input_to("do_sex");
	return 1;
}

int do_sex(string arg)
{
	int i;
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	else if(arg=="")	{
		write("请输入性别（1：男，2：女）：");
		input_to("do_sex");
		return 1;
	}
	if(sscanf(arg,"%d",i)!=1)	{
		write("请输入性别（1：男，2：女）：");
		input_to("do_sex");
		return 1;
	}
	if(i!=1&&i!=2)	{
		write("请输入性别（1：男，2：女）：");
		input_to("do_sex");
		return 1;
	}
	if(i==1)	data["gender"]="男性";
	else		data["gender"]="女性";
	write("请输入年龄：");
	input_to("do_age");
	return 1;
}

int do_age(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	else if(arg=="")	{
		write("请输入年龄：");
		input_to("do_age");
		return 1;
	}
	if(sscanf(arg,"%d",data["age"])!=1)	{
		write("请输入年龄：");
		input_to("do_age");
		return 1;
	}
	write("请输入title(回车为不设title)：");
	input_to("do_step31");
	return 1;
}

int do_step31(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	data["title"]=arg;
	write("请输入nickname(回车为不设nickname)：");
	input_to("do_step32");
	return 1;
}

int do_step32(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	data["nickname"]=arg;
	write("请输入武功等级：");
	input_to("do_step4");
	return 1;
}


int do_step4(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	if(arg=="")	{
		write("请输入武功等级：");
		input_to("do_step4");
		return 1;
	}
	else if(sscanf(arg,"%d",data["skills_lv"])!=1)	{
		write("请输入武功等级：");
		input_to("do_step4");
		return 1;
	}
	write("请输入经验点：");
	input_to("do_step5");
	return 1;
}

int do_step5(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	if(arg=="")	{
		write("请输入经验点：");
		input_to("do_step5");
		return 1;
	}
	else if(sscanf(arg,"%d",data["exp_lv"])!=1)	{
		write("请输入经验点：");
		input_to("do_step5");
		return 1;
	}
	write("请输入NPC的加力点数：");
	input_to("do_step55");
	return 1;
}

int do_step55(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	if(arg=="")	{
		write("请输入NPC的加力点数：");
		input_to("do_step55");
		return 1;
	}
	else if(sscanf(arg,"%d",data["jiali"])!=1)	{
		write("请输入NPC的加力点数：");
		input_to("do_step55");
		return 1;
	}

	write("请输入NPC所使武器(none为不使用武器)：");
	input_to("do_step61");
	return 1;
}

int do_step61(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	if(arg=="")	{
		write("请输入NPC所使武器(none为不使用武器)：");
		input_to("do_step61");
		return 1;
	}
	if(arg=="none")	data["weapon"]="none";
	else if(file_size("/std/weapon/"+arg+".c")==-1)	{
		write("没有这种武器。\n");
		write("请输入NPC所使武器(none为不使用武器)：");
		input_to("do_step61");
		return 1;
	}
	else	data["weapon"]=arg;
	write("请输入最大忠诚度（小于100）：");
	input_to("do_step6");
	return 1;
}

int do_step6(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	else if(arg=="")	{
		write("请输入最大忠诚度（小于100）：");
		input_to("do_step6");
		return 1;
	}
	if(sscanf(arg,"%d",data["max_zc"])!=1)	{
		write("请输入最大忠诚度（小于100）：");
		input_to("do_step6");
		return 1;
	}
	if(data["max_zc"]>100)	{
		write("请输入最大忠诚度（小于100）：");
		input_to("do_step6");
		return 1;
	}
	write("请输入征招条件（1－3）：");
	input_to("do_step7");
	return 1;
}

int do_step7(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	else if(arg=="")	{
		write("请输入征招条件（1－3）：");
		input_to("do_step7");
		return 1;
	}
	if(sscanf(arg,"%d",data["zz"])!=1)	{
		write("请输入征招条件（1－3）：");
		input_to("do_step7");
		return 1;
	}
	if(data["zz"]>3 || data["zz"]<1)	{
		write("请输入征招条件（1－3）：");
		input_to("do_step7");
		return 1;
	}
	write("是否设定可征招NPC的特殊武功(y/n)？");
	input_to("do_step8");
	return 1;
}

int do_step8(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	if(arg=="y")	{
		write("请设定unarmed的特殊武功：");
		input_to("do_step9");
		return 1;
	}
	else if(arg=="n")	{
		do_setnpc();
		return 1;
	}
	write("是否设定可征招NPC的特殊武功(y/n)？");
	input_to("do_step8");
	return 1;
}

int do_step9(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	else if(arg=="")	{
		write("请设定unarmed的特殊武功：");
		input_to("do_step9");
		return 1;
	}
	if(file_size(SKILL_D(arg)+".c")==-1)	{
		write("没有这种武功。\n");
		write("请设定unarmed的特殊武功：");
		input_to("do_step9");
		return 1;
	}
	if(!SKILL_D(arg)->valid_enable("unarmed"))	{
		write("这种武功不能enable在unarmed上。\n");
		write("请设定unarmed的特殊武功：");
		input_to("do_step9");
		return 1;
	}
	data["skills"]["unarmed"]=arg;
	write("请设定dodge的特殊武功：");
	input_to("do_step10");
	return 1;
}

int do_step10(string arg)
{
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	else if(arg=="")	{
		write("请设定dodge的特殊武功：");
		input_to("do_step10");
		return 1;
	}
	if(file_size(SKILL_D(arg)+".c")==-1)	{
		write("没有这种武功。\n");
		write("请设定dodge的特殊武功：");
		input_to("do_step10");
		return 1;
	}
	if(!SKILL_D(arg)->valid_enable("dodge"))	{
		write("这种武功不能enable在dodge上。\n");
		write("请设定dodge的特殊武功：");
		input_to("do_step10");
		return 1;
	}
	data["skills"]["dodge"]=arg;
	write("请设定force的特殊武功：");
	input_to("do_step11");
	return 1;
}

int do_step11(string arg)
{
	string weapon;

	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	else if(arg=="")	{
		write("请设定force的特殊武功：");
		input_to("do_step11");
		return 1;
	}
	if(file_size(SKILL_D(arg)+".c")==-1)	{
		write("没有这种武功。\n");
		write("请设定force的特殊武功：");
		input_to("do_step11");
		return 1;
	}
	if(!SKILL_D(arg)->valid_enable("force"))	{
		write("这种武功不能enable在force上。\n");
		write("请设定force的特殊武功：");
		input_to("do_step11");
		return 1;
	}
	data["skills"]["force"]=arg;
	weapon=data["weapon"];

	if(weapon!="none")	{
		write("请设定"+weapon+"的特殊武功：");
		input_to("do_step12");
		return 1;
	}
	else	do_setnpc();
	return 1;
}
	
int do_step12(string arg)
{
	string weapon;
	
	weapon=data["weapon"];
	if(arg==".")	{ write("取消本次操作。\n"); return 1;	}
	else if(arg=="")	{
		write("请设定"+weapon+"的特殊武功：");
		input_to("do_step12");
		return 1;
	}
	if(file_size(SKILL_D(arg)+".c")==-1)	{
		write("没有这种武功。\n");
		write("请设定"+weapon+"的特殊武功：");
		input_to("do_step12");
		return 1;
	}
	if(!SKILL_D(arg)->valid_enable(weapon))	{
		write("这种武功不能enable在"+weapon+"上。\n");
		write("请设定"+weapon+"的特殊武功：");
		input_to("do_step12");
		return 1;
	}
	data["skills"][weapon]=arg;
	do_setnpc();
	return 1;
}


int do_setnpc()
{
	object npc,me=this_player();

	npc=new("/u/oldsix/stdnpc");
	npc->set("name",data["name"]);
	npc->set("id",data["id"]);
	npc->set("gender",data["gender"]);
	npc->set("age",data["age"]);
	if(data["title"]!="")	npc->set("title",data["title"]);
	if(data["nickname"]!="")	npc->set("nickname",data["nickname"]);
	if(data["jiali"]>0)		npc->set("force_factor",data["jiali"]);
	npc->set_skill("unarmed",data["skills_lv"]);
	npc->set_skill("dodge",data["skills_lv"]);
	npc->set_skill("force",data["skills_lv"]);
	npc->set_skill("parry",data["skills_lv"]);
	if(data["weapon"]!="none")
		npc->set_skill(data["weapon"],data["skills_lv"]);
	npc->set("combat_exp",data["exp_lv"]);
	npc->set("skills_lv",data["skills_lv"]);
	npc->set("exp_lv",data["exp_lv"]);
	if(sizeof(data["skills"]))	{
		npc->set_skill(data["skills"]["unarmed"],data["skills_lv"]);
		npc->set_skill(data["skills"]["dodge"],data["skills_lv"]);
		npc->set_skill(data["skills"]["force"],data["skills_lv"]);
		if(data["weapon"]!="none")
		npc->set_skill(data["skills"][data["weapon"]],data["skills_lv"]);
		npc->map_skill("unarmed",data["skills"]["unarmed"]);
		npc->map_skill("parry",data["skills"]["unarmed"]);
		npc->map_skill("dodge",data["skills"]["dodge"]);
		npc->map_skill("force",data["skills"]["force"]);
		if(data["weapon"]!="none")
		npc->map_skill(data["weapon"],data["skills"][data["weapon"]]);
	}
	npc->set("max_zhongcheng",data["max_zc"]);
	npc->set("zhengzhao",data["zz"]);
	write("可征招NPC数据设置完毕。\n请先仔细检查此NPC数据是否正确。\n若要存盘，请使用write命令。\n");
	npc->move(environment(me));
	npc->set_temp("name",data["name"]);
	return 1;
}

int do_save()
{
	object npc,me=this_player();

	npc=present("machine",environment(me));
	if(! npc)	return notify_fail("这儿没有可征招NPC的模型。\n");
	if(! (string)npc->query_temp("name"))
		return notify_fail("请先使用make命令进行可征招NPC的数据生成。\n");
	if(! wizardp(me))
		return notify_fail("你无权这么做。\n");
	npc->save();
	write("可征招NPC的数据文件/data/npc/"+npc->query_temp("name")+".o写入完毕。\n");
	return 1;
}
