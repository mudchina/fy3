//This xuedao182 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "停尸房");
  set("long",@LONG
这里是死尸存放处。（本门师祖练功用活人练）
LONG
  );
  set("exits", ([ /* sizeof() == 1 */ 
      "south" : __DIR__"xuedao73",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
