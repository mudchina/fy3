//This xuedao99 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "中庭");
  set("long",@LONG
这是一间空空荡荡的房间。
LONG
  );
  set("exits", ([ /* sizeof() == 4 */ 
      "west" : __DIR__"xuedao100",
      "east" : __DIR__"xuedao104",
      "south" : __DIR__"xuedao102",
      "out" : __DIR__"xuedao98",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
