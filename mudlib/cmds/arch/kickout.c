#include <ansi.h>
#include <command.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        object ob;
        string wiz_status;
        string tmpstr;

        if( me!=this_player(1) ) return 0;

        if( !arg || sscanf(arg, "%s", arg)!=1 )
                return notify_fail("argument error!\n");


        wiz_status=SECURITY_D->get_status(me) ;

        if (wiz_status != "(arch)" && wiz_status != "(admin)" && !me->query("marks/^L^_^H^K") ) 
                return notify_fail("you r not admin!\n");

        ob = LOGIN_D->find_body(arg);
        if (!ob) return notify_fail("咦... 有这个人吗?\n");

                if (    !living(ob)
                ||      !ob->is_character()
                ||      ob==me 
                ||      (ob->query("id")=="lsj"))
                        return notify_fail("ob error!\n");
          message_vision( HIW "\n$N用足了力气大喊一声“走您的吧！”一脚将$n踢了出去！！\n\n" NOR, me,ob);
        seteuid(ROOT_UID);
        ob->save();
        destruct(ob);
        seteuid(getuid());
        
        return 1;
}
