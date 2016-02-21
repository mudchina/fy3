// Room: /u/yuki/room/a.c

inherit ROOM;

void create()
{
        set("short", "柴房");
        set("long", @LONG
这里是梅庄的柴房，屋子里面杂乱的堆放着劈好的木柴。梅庄
的日常用柴都从这里取。四面的墙壁肮脏不堪，东面墙上挂着一根
铁杆，不知道是用来做什么的。屋角有一个独立的柴堆，和其他的
木柴离的很远，你不由得多看了两眼。
LONG
        );
        set("item_desc", ([ /* sizeof() == 2 */
        "chaidui" : "柴堆乱七八糟的堆放着，从缝隙你似乎可以看见什么东西在闪光，找找看？",
        "stuff" : "你仔细观察，发现铁杆似乎可以轻轻扳动。",
]));
        set("no_clean_up", 0);
        set("exits", ([ /* sizeof() == 2 */
        "south" : __DIR__"heilang3",
]));

        setup();
//      replace_program(ROOM);
}

void init()
{
        add_action("do_pull","pull");
        add_action("do_search","search");
}

int do_pull(string arg)
{
        object me;
        me=this_player();
        if(arg!="stuff") return 0; 
        message_vision("$N轻轻的扳了扳铁杆，墙上突然出现一个大洞，一股力量把你吸了进去。\n", me);
        this_player()->move(__DIR__"mishi1"); 
        message_vision("$N连滚带爬的跌了进来，摔的浑身是泥。\n", me);

        return 1;
}

int do_search(string arg)
{       
        object ob,me = this_player();

        if(arg != "chaidui")
                return 0;
        if(query("getted_key"))
        		return notify_fail("钥匙已经被人拿走了.\n");
        if(present("key",me))
		return notify_fail("钥匙已经被人拿走了.\n");
        message_vision("$N从柴堆下费力的找出一把钥匙。\n", me);
        ob = new(__DIR__"obj/key");
        ob->move(me);
        set("getted_key",1);
        return 1;

}


