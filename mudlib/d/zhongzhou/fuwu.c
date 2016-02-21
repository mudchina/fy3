//zhongzhou fuwu.c

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short","休闲中心大堂");
        set("long", @LONG
这里是一个个的小包厢，你如果中意哪位小姐可以叫他们进来为你特别服务。
当然你要付上相当的代价.
LONG
        );

        set("exits", ([
                 "east" : __DIR__"xiuxian",
                
]));

        setup();
}




void init()
{
        object ob;

        if( interactive(ob = this_player()))
        {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}
void greeting(object ob)
{
	if( !ob || environment(ob) !=this_object()) return;
	if(ob->query("gender")=="女性")
	{
	tell_object(ob,"本中心还没有此服务项目！\n");
	return;
	}
	if(ob->query_temp("to_girls")==1)
	{
                        write(HIY
"上来一位小姐对你说：" + RANK_D->query_respect(ob)+ "。。。。。。。\n"NOR);
		ob->set_temp("to_girls",0);
        ob->set("kee",(int)ob->query("max_kee")*3/2);
        ob->set("gin",(int)ob->query("max_gin")/2);
        ob->set("sen",(int)ob->query("max_sen")/2);
 
		return;
       
	}
                else
	 {
	write(HIM
"只见上来几个彪形大汉对你嚷到："+ob->query("name")+"，没钱也想来找乐子？说罢几个人对你一阵拳打脚踢。你隐约听到他们嚷到“下次再敢来就叫你这辈子爬着走路”就昏过去，什么都不知道了！！\n"NOR);
		ob->move(__DIR__"hutong");
        ob->set("kee",(int)ob->query("max_kee")/5);
        ob->set("gin",(int)ob->query("max_gin")/5);
        ob->set("sen",(int)ob->query("max_sen")/5);
	}
}
