//This xuedao152 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "后堂");
  set("long",@LONG
东边的秘道不要在描述中体现,是有关迷题的设置。
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "south" : __DIR__"xuedao151",
      "east" : __DIR__"xuedao167",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
