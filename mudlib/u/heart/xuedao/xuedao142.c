//This xuedao142 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "沙土地");
  set("long",@LONG
练功场。
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "south" : __DIR__"xuedao143",
      "east" : __DIR__"xuedao147",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
