inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/秋娃"; }
void create()
{
#include <kzznpc.h>

       set("area_name","成都假日客店");
       set("area_file","/d/chengdu/kedian.c");
       setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",4);
	carry_object("/obj/std/armor/pijia")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
	carry_object("/obj/std/armor/pikui")->wear();	
}
void init()
{       
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        switch( random(2) ) {
                case 0:
                        say( "秋娃笑咪咪地说道：这位" + RANK_D->query_respect(ob)
                                + "，进来喝杯茶，润都哈喉咙。\n");
                        break;
                case 1:
                        say( "秋娃用脖子上的毛巾抹了抹手，说道：这位" + RANK_D->query_respect(ob)
                                + "，欢迎光临，本店服务热情周到。\n");
                        break;
        }
}

int accept_object(object who,object obj)
{
        string bh;

        bh=(string)who->query("banghui");
        if( !bh || bh!=(string)query("banghui"))        {
                if (obj->query("money_id")&&obj->value()>=200)  {
                tell_object(who,"秋娃一摆手道:里面请。\n");
                who->set_temp("rent_paid",1);
                "/cmds/adm/ctom.c"->save_money(this_object(),obj->value()/2);
                return 1;
                }
                else    {
                tell_object(who,"秋娃道：我说过了，住店要二两纹银。\n");
                return 0;
                }
        }
        if (obj->query("money_id")&&obj->value()>=100)  {
        tell_object(who,"秋娃一摆手道:这位兄弟，里面请！\n");
        "/cmds/adm/ctom.c"->save_money(this_object(),obj->value()/2);
        who->set_temp("rent_paid",1);
        return 1;
        }
        else    {
                tell_object(who,"秋娃道：自己弟兄也得付个一两银子意思意思吧。\n");
                return 0;
        }
}

