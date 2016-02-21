inherit ROOM;

void create()
{
        set("short","白驼山岩洞内");
        set("long",@LONG
这里是岩洞内部，洞顶上悬挂着洁白的钟乳石。
其中有一根好象假的一样。
LONG
        );
  set("exits",([
      "south" : __DIR__"cave",
     ]));
 setup();
}
void init()
{
        add_action("do_pi","ba");
}
int do_pi(string arg)
{
        object me,ob;
        me = this_player();
        if (arg != "钟乳石")return notify_fail("你要拔什么？\n");
        if(me->query("sen")< 100)return notify_fail("你还是歇歇吧。\n");
        if(me->query_skill("dodge")< 40)return notify_fail("你蹦的老高，但还是够不着钟乳石。\n");
        if(me->query("score")>10000)return notify_fail("当你想拔下钟乳石的时候，天空中传来一声怒喝：就你还陪当大侠？\n");
        me->add("kee",-100);
        message_vision("$N高高越起，抓住了钟乳石,一下子就拔了下来，露出了一个小洞。\n",me);
        set("exits/up", __DIR__"cave2");
        return 1;
}

