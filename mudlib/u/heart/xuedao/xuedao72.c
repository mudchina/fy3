//This xuedao72 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "牢房夹道");
  set("long",@LONG
这是一间空空荡荡的房间。
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "south" : __DIR__"xuedao71",
      "west" : __DIR__"xuedao179",
      "north" : __DIR__"xuedao180",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
