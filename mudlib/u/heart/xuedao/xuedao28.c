//This xuedao28 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "内洞");
  set("long",@LONG
这是一间空空荡荡的房间。
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "northeast" : __DIR__"xuedao27",
      "southwest" : __DIR__"xuedao29",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/4");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
