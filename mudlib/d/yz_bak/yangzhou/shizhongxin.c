// Mr.music yangzhou's 市中心

inherit ROOM;

void create()
{
  set ("short", "市中心");
  set ("long", @LONG
	这里是城市的中心，联接着城里各大主要街道。来自五湖四海，
三教九流的人士群集于此，更是富豪商贩们的黄金地带。“腰缠十万贯 
骑鹤下扬州”，历代风流豪客至此，无不倾囊而归。广场中心是一个[33m水
池[37m，池里好象有些小[33m鱼[37m游来游去。

LONG
    );

  set("objects", ([ 
                   __DIR__"npc/shusheng" : 1,
                   __DIR__"npc/xiaohaizi" : 1 ,
                   __DIR__"npc/langzhong" :1,
                 ]));

        set("item_desc", ([
                        "池" : "一个露天的水池。\n" ,
                        "chi" : "一个露天的水池。\n" ,
                        "鱼" : "一些很小的草鱼..\n" , 
                        "yu" : "一些很小的草鱼..\n" ,  
                          ]));
        set("resource/water",1);

  set("valid_startroom", 1);
  set("outdoors", "/d/yangzhou");
  set("exits", ([  
    "west" : __DIR__"dongguan3",
    "south" : __DIR__"yingshijie1",
    "north" : __DIR__"pishijie1",
    "east"  : __DIR__"dongguan4",
]));

  setup();
}


void init()
{
    add_action("do_drink", "drink");
    add_action("do_drink", "he");
    add_action("do_eat","eat");
    add_action("do_eat","chi");
}

int do_drink(string sss)
{

object ob;
ob=this_player();
if ((sss!="chi")&&(sss!="shui")&&(sss!="water"))
  {
   return 0;
  }
if(ob->query("water")> ((int)ob->query("str")-10)*10+150 )
 {
  tell_object(ob,"你喝足了还要喝啊！\n");
  return 1;
 } 
else
 {  
 say(ob->query("name")+"趴在水池边，一口气喝了够饱. \n");
 tell_object(ob,"你趴在水池边，一口气喝了够饱. \n");
 ob->set("water",((int)ob->query("str")-10)*10+200);

  return 1;
 }

 }

int do_eat(string sss)
{

object ob;
ob=this_player();

if ((sss!="fish")&&(sss!="yu"))
  {
   return 0;
  }

if(ob->query("food") <50 )
  {
 say(ob->query("name")+"从水池里捞出一条鱼来，一口吞了下去. \n");
 tell_object(ob,"你从水池里捞出一条鱼来，一口吞了下去. \n");
 ob->add("food",5);
  }
else 
 {
//  say (ob->query("name")+",还是找点别的吃吧！\n");  
  tell_object(ob,"你最好还是找点别的吃吧！\n");
 } 

  return 1;
}
