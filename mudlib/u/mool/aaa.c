// Room: /d/sandboy/shandao 
#include <ansi.h>
inherit ROOM; 
 
void create ()
{
      set ("short", "山道");
      set ("long", @LONG
这是一条幽静的山道。太阳暖洋洋地在头上，溪水活泼泼地在脚边流过。 
小鸟儿唧唧叫着飞过不远的树林，道边地上有一大堆砍好的毛竹。一只酒 
葫芦就放在那堆毛竹边，和一个陶罐、一个瓷碗以及两件打着补丁的粗布 
衣裳放在一起。向西是一片竹林，传来咔咔的砍竹声。 
LONG);

      set("objects", ([ 
      "/d/obj/weapon/hammer/jiuhulu.c" : 1,
      __DIR__"obj/taoguan.c" : 1,
      __DIR__"obj/ciwan.c" : 1,
      "/d/obj/cloth/pobuyi" : 1,
]));
      set("outdoors","/d/jiangnan");
      set("item_desc", ([ 
  "树林" : "一片杂树林，大约有好几十棵。 
",
  "竹林" : "这里的毛竹很多，一山一山的，散发着浓郁的竹香。 
",
  "溪水" : "山泉从高处流下，形成的小溪流。 
",
]));
      set("exits", ([ 
      "west" : __DIR__"zhulin",
      "east" : __DIR__"shandao",
]));

      setup();
}
void init()
{
      add_action("do_kan","kan");
}
int do_kan(string arg)
{
        object me,ob,sn;
        me = this_player();
        if (arg != "cuizhu") return 0;
        message_vision("砍断竹子，找到了陶罐。\n",me);
        ob=new("/d/sandboy/obj/taoguan");
        ob->move(me);
        return 1;
}





