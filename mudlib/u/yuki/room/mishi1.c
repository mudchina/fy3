inherit ROOM;

void create()
{
        set("short", "地下秘室");
        set("long", @LONG
这是黑呼呼的一间密室，什么都看不见，在黑暗中你能隐约听
到“滴答滴答”的水声，不知道是什么地方。你等了一会儿，摸黑
向前走去。迎面是一堵墙，摸上去湿漉漉的。
LONG);

        set("item_desc",([
        "wall" : "黑糊糊的，什么也看不见。\n",
        "button" : "黑糊糊的，什么也看不见。\n",
]));

        setup();
}

void init()
{
         add_action("do_touch","touch");
        add_action("do_an","an");
}

 int do_touch(string arg)
{
        object me,ob,sn;
       me = this_player();
      if (arg !="wall") return 0;
       message_vision("你碰到一块突起，似乎是个按钮。\n", me);
       return 1;
}

int do_an(string arg)
{
        object me;
        me = this_player();
        if (arg != "button") return 0;
        message_vision("你听到耳边“轰隆”一声巨响，地板裂开了，你掉了下去。\n",me);
        me->move("/u/yuki/room/mishi2");
        return 1;
}
