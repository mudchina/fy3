#include <ansi.h>
inherit NPC;
void create()
{
	set_name(YEL"司马德"NOR,({"zhifu","daren","yudeshui"}));
        set("title",YEL+"泉州知府"+NOR);
	set("gender", "男性" );
	set("age",40);
        set("shen_type",-1);
        set("combat_exp",50000);
	set("long",
	"这位大人别的本领不行,搜刮钱财倒是在行。\n"
	);
        
        set_skill("unarmed",60);
        set_skill("parry",60);
        set_skill("dodge",60);
	set("attitude","friendly");

        set("inquiry",([
         "luyin":"要出海到台湾,海南,五两银子一张.\n",
         "路引":"要出海到台湾,海南,五两银子一张.\n",
       ]));
	setup();
	carry_object("/d/quanzhou/obj/guanfu")->wear();
}
void init()
{
 add_action("do_say","say");
}
int accept_object(object who,object item)
{	
	if(item->query("money_id") &&
	item->value()>=500)
	{
       who->set_temp("money_gived",1);
	 command("hehe");
       command("say 海南?(say hainan),台湾?(say taiwan)\n");
		return 1;
	}
    else
	command("say 大胆刁民,胆敢戏弄本官。\n");
	return 0;
}
int do_say(string str)
{
  object obj;
if (!living(this_player())||environment(this_player())!=environment())
     return 0;
if (!this_player()->query_temp("money_gived")) return 0;
obj=present("luyin",this_object());
if (!obj) 
   obj=new("/d/quanzhou/obj/luyin.c");
   obj->move(this_object());
switch(str)   {
   case "hainan":
        {
         obj->set("long","一张淡黄色的纸条,上面用朱砂
写了"+HIR+"海南"+NOR+"二字,下角还盖着泉州知府的大印.\n");
         obj->set("where","hainan");
         command("give luyin to "+this_player()->query("id"));
         this_player()->delete_temp("money_gived");
         return 1;
        }
   case "taiwan":
       {  
       obj->set("long","一张淡黄色的纸条,上面用朱砂
写了"+HIR+"台湾"+NOR+"二字,下角还盖着泉州知府的大印.\n");
         obj->set("where","taiwan");
         command("give luyin to "+this_player()->query("id"));
        this_player()->delete_temp("money_gived");
         return 1;
       }
    }
return 0;
}