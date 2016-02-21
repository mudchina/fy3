// Room: /d/sandboy/duanhun 
inherit ROOM; 

int i=0; 
void create() 
{ 
  set ("short", "断魂谷");
  set ("long", @LONG
凝目望去，只见前面，重峰叠翠，峭壁如切。别说是人走了，就算是
山猿越渡，也非易事。长长的茂草从地上窜出来，掩住了地上的砂砾。
LONG);

  set("outdoors", "/d/sandboy");
  setup();
}
void init()
{
     add_action("do_search","search");
     add_action("do_search","xun");
     add_action("do_la","la");
}
int do_search()
{
   object ob=this_player();
   if (!ob||environment(ob)!=this_object())
               return 0;
    i++;
  message_vision("$N不断翻起地上的沙石和野草，似乎在寻找些什么!\n",ob);
      if (random(i)>4)
           {
             tell_object(ob,"你突然发现一枚金环(gold_circle).\n");
             ob->set_temp("sandboy/found_huan",1);
             set("item_desc",([
               "gold_circle":"一枚小指粗的金环.\n",
               "金环":"一枚小指粗的金环.\n",
              ]));
            i=0;
                      return 1;
           }
 else 
 tell_object(ob,"你什么都没找到!\n");
 return notify_fail("");         
}
int do_la(string str)
{
    object ob;
        ob=this_player();
     if (!ob||environment(ob)!=this_object()) return 0;
    if (!ob->query_temp("sandboy/found_huan")) return 0;
    if (!str) return notify_fail("你要拉什么?\n");
if ((str!="金环")&&(str!="gold_circle")) return notify_fail("你要拉什么?\n");
    message_vision("$N用中指扣住金环往上拉!\n",ob);
       if (ob->query("str")+ob->query_skill("unarmed",1)/10<30)       
           {
        message_vision("$N憋得满脸通红，可金环纹丝不动!\n");
        return 0;
              }
   write("只听地底下轰轰隆窿一阵响，眼前露出一道三尺见方的地洞.\n
       一块银牌，缓缓由洞中升起。\n");
   set("item_desc",([
      "银牌":"朱红色的大字，一目了然。
      　　写的是：地下古堡，杀机弥漫，行入此门，生死莫怨.\n",
]));
   this_object()->set("exits",(["down":__DIR__"dibao"]));
   ob->delete_temp("sandboy/found_huan");
     return 1;
} 

   