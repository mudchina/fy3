// By Mr.music  zhenjiang's 渡口

inherit ROOM;

void create()
{
        set("short", "渡口");
        set("long", @LONG
	这里是通往去扬州城的渡口，前面就是滚滚长江，向南就是镇江城。
你正犹豫如何过江，发现江边有些小[33m船[37m。
LONG
        );

        set("valid_startroom", 1);
        set("no_sleep_room",1);

      set("item_desc", ([
              "chuan" : "这些小船也许可以上。\n",
                "船":     "这是些小船，好象没人管理，也许可以自己划.\n",    
                       ]));
        set("objects", ([
                __DIR__"npc/shusheng" : 1,
        ]));

        set("exits", ([
                "south" : __DIR__"dukoulu",
        ]));

        setup();
//      "/obj/board/mainboard"->foo();
}

void init()
{
    add_action("do_enter", "enter");
    add_action("do_enter", "shang");
}

int do_enter(string sss)
{

object ob;
ob=this_player();
if ((sss!="boat")&&(sss!="chuan"))
  {
   tell_object(ob,"你想上哪呢？\n");
   return 1;
  }
 say(ob->query("name")+"上了小船，离岸上路. \n");
tell_object(ob,"你小心翼翼的上了小船.\n");
ob->move("/d/zhenjiang/jiangzhong");

  return 1;
 }
