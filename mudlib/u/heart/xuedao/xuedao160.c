//This xuedao160 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "陡峭山路");
  set("long",@LONG
从此是上山的路。
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "eastup" : __DIR__"xuedao161",
      "north" : __DIR__"xuedao171",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
