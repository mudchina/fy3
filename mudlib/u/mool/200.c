inherit ROOM;

void create ()
{
  set ("short", "柴房");
  set ("long", @LONG
这里是梅庄的柴房，屋子里面杂乱的堆放着劈好的木柴。梅庄
的日常用柴都从这里取。四面的墙壁肮脏不堪，东面墙上挂着一根
铁杆，不知道是用来做什么的。屋角有一个独立的柴堆，和其他的
木柴离的很远，你不由得多看了两眼。
LONG);
        set("item_desc",([
        "stuff" : "你仔细观察，发现铁杆似乎可以轻轻扳动。\n",
        "chaidui" : "柴堆乱七八糟的堆放着，从缝隙你似乎可以看见什么东西在闪光，找找看？\n",
]));

        set("exits", ([ /* sizeof() == 1 */
        "south" : __DIR__"heilang3",
]));

        setup();
}

void init()
{
        add_action("do_pull","pull");
        add_action("do_search","search");
}

int do_pull(string arg)
{
        object me,ob,sn;
        me = this_player();
        if (arg != "stuff") return 0;
        message_vision("眼前一黑，耳边风声“呼呼”直响。你发现到了另外一个地方。\n",me);
        me->move("/u/yuki/room/mishi1");
        return 1;
}

int do_search(string arg)
{
        object me,ob,sn;
        me = this_player();
        if (arg != "chaidui") return 0;
        if (me->query_temp("mark/key"))
                return notify_fail("你啥都没发现。\n");
        if (me->query("gin") < 10 || me->query("kee") < 10 || me->query("sen") < 10)
                return notify_fail("你什么都没找到。\n");
        message_vision("$N发现了钥匙。\n",me);
        me->set_temp("mark/key",1);
        ob=new("/u/yuki/obj/key");
        ob->move(me);
        return 1;
        }

