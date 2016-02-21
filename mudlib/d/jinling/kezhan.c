// Room: /d/suzhou/kezhan.c

inherit ROOM;

void create()
{
        set("short", "双龙客栈");
	set("long", @LONG
这儿就是竟陵城最大的客栈，门前挂着四个大红灯笼，上面写着＂双龙客栈＂，
这个客栈已有一百多年的历史了。里面有一流的吃，住条件，几乎天天
爆满。门口站着一个小二，负责接待客人．
LONG
	);
        set("exits", ([ /* sizeof() == 2 */
                "northwest" :__DIR__"shizhong.c",
		"up" :__DIR__"woshi",
]));

	set("objects",([
		__DIR__"npc/xiaoer" :1,
]));
	setup();
}
int valid_leave(object who,string dir)
{
	object npc,env;
	npc=present("xiao er",this_object());
	env=new("/d/suzhou/woshi.c");
//	if(sizeof(all_inventory(env))>=1)   {
//	 return notify_fail("楼上客房已满。请下次再来吧。\n");
//	}
	if(!npc)	{
		who->set_temp("rent_paid",0);
		return 1;
		}
	if(dir=="up"&& who->query_temp("rent_paid")==1) 	{
		who->set_temp("rent_paid",0);
		return 1;
		}
	if(dir=="up"&&who->query_temp("rent_paid")==0)	{
	return notify_fail("店小二奸笑道：没付银子就想住宿，天下哪有这个道理？\n");
			}
	return 1;
}
