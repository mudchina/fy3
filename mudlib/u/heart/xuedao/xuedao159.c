//This xuedao159 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "后门");
  set("long",@LONG
这是一间空空荡荡的房间。
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "gate" : __DIR__"xuedao158",
      "east" : __DIR__"xuedao171",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
