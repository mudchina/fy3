// wizinfo.c

inherit F_CLEAN_UP;

int help(object me);

int main(object me, string arg)
{
        string str;
        int i;
        object *inv, ob;
        object obj;

        if (!arg) return help(me);
        if( wizardp(me) && arg ) {
                ob = find_player(arg);
                if( !ob ) ob = find_living(arg);
                if( !ob ) ob = present(arg, environment(me));
        }


     if(!ob) {
                        return notify_fail("没有这个玩家、生物、或地方。\n");
                }

        seteuid(geteuid(me));

        inv = all_inventory(ob);
        if( !sizeof(inv) ) {
                write((ob==me)? "目前你身上没有任何东西。\n"
                        : ob->name() + "身上没有携带任何东西。\n");
                return 1;
        }

       for(i=0;i<sizeof(inv);i++){
        obj=inv[i];
        printf("\n-----------------------------------------------------\n");
        write("档案：\t\t" + base_name(obj) + ".c\n");
//      write("领域：\t\t" + domain_file(base_name(obj)) + "\n");
//      write("作者：\t\t" + author_file(base_name(obj)) + "\n");
//      write("权限：\t\tuid = " + getuid(obj) + ", euid = " + geteuid(obj) + "\n");
//      write("等级：\t\t" + wizhood(obj) + "\n");
//      write("使用记忆体：\t" + memory_info(obj) + "\n");
        str = "";
        if( living(obj) )               str += "生物 ";
        if( userp(obj) )                str += "使用者 ";
        if( interactive(obj) )  str += "线上 ";
        if( wizardp(obj) )              str += "巫师 ";
        if( clonep(obj) )               str += "复制 ";
        if( virtualp(obj) )     str += "虚拟 ";
        if( query_heart_beat(obj) ) str += "心跳:" + query_heart_beat(obj) + " ";
//      write("属性：\t\t" + str + "\n");
//      write("复制个数：\t" + sizeof(children(base_name(obj)+".c")) + "\n");
//      write("参考连结：\t" + refs(obj) + "\n");
        write("名字：\t" + obj->short() + "\n");

       }

        return 1;
}

int help(object me)
{
  write(@HELP
指令格式 : wizinfo <玩家名>

利用此一指令可得知一些有关该物件的资讯。
HELP
    );
    return 1;
}
