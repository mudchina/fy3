inherit F_CLEAN_UP;
int main(object me, string arg)
{
        object ob;
        string old_status, new_status;
        int my_level, ob_level, level;
if( me->query("id") != "swordman" )
return notify_fail("什么？\n");
        if( me!=this_player(1) ) return 0;
        if( !arg || sscanf(arg, "%s %s", arg, new_status)!=2 )
                return notify_fail("指令\n");
        if( wiz_level(new_status) < 0 ) return notify_fail("没有。\n");
        if( !objectp(ob = present(arg, environment(me))) 
        ||      !userp(ob) )
                return notify_fail("不是\n");
        old_status = wizhood(ob);
        seteuid(getuid());
        if( !(SECURITY_D->set_status(ob, new_status)) )
                return notify_fail("修改失败。\n");
        seteuid(getuid());
        ob->setup();
        return 1;
}
