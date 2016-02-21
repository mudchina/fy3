// Room: /d/taiwan/chufang.c

inherit ROOM;

void create ()
{
  set ("short", "厨房");
  set ("long", @LONG
一间简陋的厨房,木条封住的窗户上给蜘蛛作了个网.一张破烂的桌子 
还摆放在那儿,一顶暗红色的木橱半开着,能看到里面的碗盏.几只老鼠见 
你进来匆忙地逃开了. 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/table.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "southwest" : __DIR__"huilang.c",
]));

  setup();
}
void init()
{
      if (interactive(this_player()))
             {  remove_call_out("greeting");
                 call_out("greeting",15,this_player());
             }
}
void greeting(object me)
{
    object ob1;
    int i;
    if (!me) return;
    if (environment(me)!=this_object()) return;
        ob1=present("zhizhu",this_object());
         if (!ob1)
            {  i=me->query("kar");
            if (random(i)<15)
                 {
message("vision","房梁上一阵悉索响声,你抬头看时,一只蜘蛛从梁上掉了下来!\n",__DIR__"chufang");
                        ob1=new(__DIR__"npc/zhizhu");
                        ob1->move(this_object());
                        return;
                 }
message("vision","你听到房梁上有悉悉索索的声音,仔细看辨认却一无所见!\n",__DIR__"chufang");
          return;
        }
   return;
}
