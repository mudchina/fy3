//This xuedao181 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "牢房");
  set("long",@LONG
牢房是用来关一些被抓来练功用的人。
LONG
  );
  set("exits", ([ /* sizeof() == 1 */ 
      "north" : __DIR__"xuedao179",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
