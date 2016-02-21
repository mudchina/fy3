// Room: /d/taiwan/tangzhong 
inherit ROOM; 
 
void create ()
{
  set ("short", "池塘中");
  set ("long", @LONG
这是一个破败的池塘.虽然水面上飘满了浮萍,但并不如你所想的 
那么浅.暗黑的池水中时有游鱼在你面前经过,在头顶水面的天光下,能 
看到池的正中有朵石雕莲花. 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/fish.c" : 2,
]));
  set("item_desc", ([ /* sizeof() == 3 */
  "莲花" : "从其细腻的纹理看来,是用上好的松山石雕刻而成的.正中粉色 
莲蓬上有个浮雕的脚印. 
",
  "石雕莲花" : "从其细腻的纹理看来,是用上好的松山石雕刻而成的.正中粉色 
莲蓬上有个浮雕的脚印. 
",
  "脚印" : "这个脚印雕刻得栩栩如生,你看了看自己的鞋子,思量着, 
不知能不能踩(touch)上去. 
",
]));

  setup();
}
void init()
{ 
   add_action("do_touch","touch");
   add_action("do_climb","climb");
}
int do_touch(string str)
{
   object ob,ob1,ob2;
   ob=this_player();
   if (!ob||environment(ob)!=this_object()) return notify_fail("");
   if (!str) return notify_fail("你要踩什么?\n");
   if (str!="脚印") return notify_fail("你要往哪里踩?\n");
   message_vision("$N一脚向莲蓬上的脚印踩去,石莲花应脚向下沉去!\n",ob);
   ob1=load_object(__DIR__"dating");
   ob2=load_object(__DIR__"midao");
if (ob1->query("exits/in")==__DIR__"midao")
     {
         tell_room(__DIR__"dating","大厅正中的猛虎图突然缓缓下降,把密道遮住了!\n");
         ob1->delete("exits/in");
         tell_room(__DIR__"midao","前面突然一阵黑暗,外出的洞口被遮住了!\n");
         ob2->delete("exits/out");
        return 1;
   }
   tell_room(__DIR__"dating","大厅正中的猛虎图突然无声无息地向上移开,露出一个密道!\n");
   ob1->set("exits/in",__DIR__"midao");
   tell_room(__DIR__"midao","眼前突然一片光亮,密道出口处似乎是个大厅\n");
   ob2->set("exits/out",__DIR__"dating");
   return 1;
}
int do_climb()
{
  object ob;
  ob=this_player();
  message_vision("$N手脚并用向岸上爬去!\n",ob);
  tell_room(__DIR__"chitang","有人从池塘中湿漉漉地爬了上来!\n");
  ob->move(__DIR__"chitang");
  return 1;
}
