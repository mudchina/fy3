//This xuedao106 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "西挎院");
  set("long",@LONG
这是一间空空荡荡的房间。
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "east" : __DIR__"xuedao105",
      "southwest" : __DIR__"xuedao107",
      "north" : __DIR__"xuedao111",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
