//This xuedao121 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "大厅");
  set("long",@LONG
长老(级的NPC)在此,可以领任务。
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "south" : __DIR__"xuedao119",
      "east" : __DIR__"xuedao122",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
