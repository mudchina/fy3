//This xuedao163 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "陡峭山路");
  set("long",@LONG
这是一间空空荡荡的房间。
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "southwestdown" : __DIR__"xuedao162",
      "northup" : __DIR__"xuedao164",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
