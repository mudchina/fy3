inherit ROOM;

void init();
string look_gate();
int do_open(string);
int do_lock(string);

void create()
{
        set("short", "院子");
        set("long",@LONG
这是黑呼呼的一间密室，什么都看不见，在黑暗中你能隐约听
到“滴答滴答”的水声，不知道是什么地方。你只好继续摸黑向前
走。突然前面有扇门挡住了你的去路。
LONG);

        set("item_desc", ([
            "door" : (: look_gate :),
        ]));

        set_temp("lock",1);

        setup();
//        replace_program(ROOM);
}

void init()
{
        add_action("do_open", "open");
        add_action("do_lock", "lock");

}

string look_gate()
{
        if (query_temp("lock") == 0)
                return "门上的铁锁被打开了。\n";
        return "这扇门被铁锁牢牢锁住。\n";
}

int do_open(string arg)
{
        object me=this_player(), room;

        if(!arg || arg!="door")
                return notify_fail("你要开什么？\n");

        if( query_temp("lock") == 1 && !present("key", me) )
                return notify_fail("你想怎么开门？\n");

        if(!( room = find_object("/u/yuki/room/taoyuan")) )
                room = load_object("/u/yuki/room/taoyuan");

        if(!objectp(room))
                return notify_fail("ERROR:not found 'taoyuan.c' \n");

        if(query_temp("lock") == 1 && present("key", me))
        {
                set_temp("lock", 0);
                message_vision("$N把钥匙插进锁孔，轻轻一转，锁开了。\n", me);
                message("vision", "外面传来一阵开锁的声音，只听见‘卡嗒’一声，锁开了。
  \n",room);
}
   message_vision("$N推开门，眼前一阵强烈的光线。门自己关上了。\n",me);
   message("vision", "有人走了进来，门在身后自动关上了。\n",room);
   me->move(room);
   return 1;
}

int do_lock(string arg)
{
        object me=this_player();
        object room;

        if(!arg ||  arg!="door")
                return notify_fail("你要锁什么？\n");
        if( !present("key",me))
                return notify_fail("你想拿什么锁门啊？\n");
        if(!( room = find_object("/u/yuki/room/taoyuan")) )
                room = load_object("/u/yuki/room/taoyuan");
        if(!objectp(room))
                return notify_fail("ERROR:not found 'taoyuan.c' \n");

        if(query_temp("lock") == 1)
                return notify_fail("门已经锁好了。\n");
        set_temp("lock",1);
        message_vision("$N把钥匙插进锁孔，只听见‘卡嗒’一声，锁被锁上。\n",me);
        message("vision", "外面传来一阵锁铁锁的声音，只听见‘卡嗒’一声，锁被锁上了。
  \n",room);

        return 1;
}

