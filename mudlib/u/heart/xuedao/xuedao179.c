//This xuedao179 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "牢房夹道");
  set("long",@LONG
这是一间空空荡荡的房间。
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "east" : __DIR__"xuedao72",
      "west" : __DIR__"xuedao73",
      "south" : __DIR__"xuedao181",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
