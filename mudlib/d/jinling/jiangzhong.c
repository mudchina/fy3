// By Mr.music  zhenjiang's 江中

inherit ROOM;

void create()
{
        set("short", "江中");
        set("long", @LONG
	你现在在渡船中，船上只有桨没有人，可能只好自己[31m划[37m了,你看了看滔滔
江水，不禁打了个颤....可别翻了...四面全是滚滚长江，向北是扬州，向南就是
镇江城。

LONG
        );

        set("valid_startroom", 1);
        set("no_sleep_room",1);

//      set("item_desc", ([
//              "chuan" : "这些小船也许可以上。\n",
  //              "船":     "这是些小船，好象没人管理，也许可以自己划.\n",
//      ]));

//      set("objects", ([
//              __DIR__"npc/shusheng" : 1,
//      ]));

//      set("exits", ([
//              "south" : __DIR__"dukoulu",
//      ]));

        setup();
//      "/obj/board/mainboard"->foo();
}

void init()
{
//    call_out("go_ahead",20,this_player() );
    add_action("do_hua", "hua");
}

int do_hua()
{
object ob;
ob=this_player();
tell_object(ob,"你抖抖忽忽的在滔滔江水中用力划了一阵. \n" );
if(ob->query("kee") < 21) ob->set("kee",21);
ob->add("kee",-20);
if( random( ob->query("kar") -10 ) == 0)
 {
     tell_object(ob,
   "突然一个大浪打来，你还没来得急叫出声，就被江水吞没了!\n");
//    ob->set("kee",0);
//    ob->set("gin",0);
    ob->unconcious();
    ob->move("/d/yangzhou/dukou");
  return 1;
 }
ob->move("/d/yangzhou/dukou");
return 1;
}

