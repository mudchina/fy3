//This xuedao131 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "内广场");
  set("long",@LONG
这是一间空空荡荡的房间。
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "west" : __DIR__"xuedao132",
      "south" : __DIR__"xuedao130",
      "north" : __DIR__"xuedao153",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
