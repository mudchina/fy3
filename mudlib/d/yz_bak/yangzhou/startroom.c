// By Mr.music  yangzhou's ���¾�¥

inherit ROOM;

void create()
{
        set("short", "���¾�¥");
        set("long", @LONG
        ����������ݳ��������ĺ������¾�¥�����������ÿ���
��Ϊ��Ʒ�����;������������ࡢ���������޲���������Ʒ������
���������У������˱ǣ�ʹ��е������е���ˡ�¥���ǿ�ջ�����
���Ŀ���Ҳ�����ڴ���Ϣ���ޣ���¥����ʦ�ǵĻ�������뵽ʲô��
������ͽ��飬������¥�ÿ����԰����ԡ�

LONG
        );

        set("no_fight", 1);
        set("valid_startroom", 1);
        set("no_sleep_room",1);

        set("item_desc", ([
                "paizi" : "¥���Է���ÿҹһ��������\n",
                         ]));

        set("objects", ([
                __DIR__"npc/xiaoer" : 1,
                __DIR__"npc/weixiaobao"  : 1,
        ]));

        set("exits", ([
                "east" : __DIR__"pishijie3",
                "up" : __DIR__"mingyue2",
        ]));

        setup();
}

void init()
{
add_action("to_hankou","quhankou");
add_action("do_gui","gui");
add_action("do_gui","kneel");
}

int do_gui()
{
return 1;
}

int to_hankou()
{

tell_object(this_player(),"[1;33m���˵�����ú�Ժ�г������ڣ�����һ�̰�.[0;37m\n");

say(this_player()->query("name")+"����С��Ƶ���Ժ�ˡ�\n");


this_player()->move(__DIR__"houyuan");


return 1;
}


int valid_leave(object me, string dir)
{

//         if( ( ! wizardp(me) ) && dir == "up" ) return 
//   notify_fail("��С������¥��ǰ����Ц����¥����װ�ޣ����ϻ��Ǵ�������!\n");

        if ( !me->query_temp("rent_paid") && dir == "up" && !wizardp(me))
        return 
notify_fail("��С������¥��ǰ����Ц����¥�������������ϻ��Ǵ�������!\n");

// if who upstair for post in wizroom , back money to it.
if( ! wizardp(me) )
    {
       if( me->query_temp("post_ok_la")  && dir == "out")
        {
          say("��С����"+me->query("name")+"�ϸ�������������ү���ߣ�\n");
          write("��С�����İ�������һ��. \n");
          write("��С��С��˵������֪������ʦ�����ѣ��������Ϻ���!\n");
          write("��С�����˲�ע�⣬���˶������Ӹ���. \n");
          clone_object("/obj/money/silver")->move(me);
          clone_object("/obj/money/silver")->move(me);
//error:           me->add_money("silver", 2);
          me->delete_temp("post_ok_la");
         }
     }

        return ::valid_leave(me, dir);
}