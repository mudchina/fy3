inherit NPC;

void create()
{
restore_object("/data/npc/包拯");
	set("long",
	"面色黝黑，相貌清奇，气度不凡。让你不由自主，好生敬仰.
你有什么信息要通告天下的,可以付5两金子.天下各城门都会出告示.\n"
	);
set_name(query("name"),({query("id")}));
        set("max_force",(int)query_skill("force")*10);
        set("max_kee",220+(int)query_skill("force")*10/4);
        set("bellicosity",0);
        set("kee",query("max_kee"));
        set("eff_kee",query("max_kee"));
        set("gin",query("max_gin"));
        set("eff_gin",query("max_gin"));
        set("sen",query("max_sen"));
        set("eff_sen",query("max_sen"));
        set("force",query("max_force"));
        setup();
}
void init()
{
  ::init();
  add_action("do_post","tonggao");
}
int accept_object(object who,object item)
{	
	if(item->query("money_id") &&
	item->value()>=50000)
	{
		command("say 钱我就收下了,请用通告(tongao xxx)说明你的要求。");
	who->set_temp("bao_flag",1);
		return 1;
	}
	command("ask "+who->query("id")+" about 至少5两金子！");
	return 0;
}
void done_post(object me, mapping note, string text)
{
        note["msg"] = text;
        set("note", note);
 command("say 你的通告已经颁布天下,你可以走了.\n");        
        this_player()->set_temp("post_ok_la",1);
save_object("/data/npc/包拯");
        return;
}
int do_post(string arg)
{
 mapping note;
 object ob=this_player();
 if (!ob->query_temp("bao_flag"))
   return notify_fail("不给钱怎行!\n");
//if ((int)query("note/time")-time()<60*60)
//return notify_fail("新通告颁布不久,如今不宜通告别的内容.\n");
        if(!arg) return notify_fail("通告请指定一个标题。\n");
        
        note = allocate_mapping(4);
        note["title"] = arg;
        note["author"] = this_player()->query("name");
        note["id"] = this_player()->query("id");
        note["time"] = time();
        this_player()->edit( (: done_post, this_player(), note :) );
        return 1;
}
