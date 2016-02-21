
//d/zhongzhou/biwufall.c
inherit ROOM;
string look_shelf();

void create()
{
         set("short", "席棚");
        set("long", @LONG
这里是比武台旁边的大席棚，棚中摆放着十数张木床，上面躺着从
比武台上败下阵来的各路高手。几名身穿蓝衫的青年正在查看他们的伤
势。席棚中充满了草药的味道。
LONG );
        set("item_desc", ([
                "shelf" : (: look_shelf :),
        ]));

        set("exits", ([
                 "westdown"        : __DIR__"biwuchangyuan.c",
        ]));
         set("no_fight", 1);
         set("no_steal", 1);
         set("no_drop", 1);
        set("no_clean_up", 0);
        set("no_openshelf", 1);
        setup();
}

void init()
{
        add_action("do_war",({"fight","hit","kill","qiecuo"}));
        add_action("do_quit",({"du","dazuo","exercise","lian","learn","xue",
                   "practice","study","exit","quit"}));
        add_action("do_take","take");
        add_action("do_open","open");
        add_action("do_close","close");
}
int valid_leave(object me, string dir)
{
        if( dir=="up" && !wizardp(me) )
                return notify_fail("裁判席只有被特邀才能进去。\n");
        me->set_temp("view_leitai",1);
        return ::valid_leave(me, dir);
}
int do_war(string arg)
{
        write(this_player()->query("name")+"，在比武场只能用指令 biwu 来切磋！\n");
         return 1;
}
int do_quit(string arg)
{
        write(this_player()->query("name")+"，专心比武吧！\n");
        return 1;
}



