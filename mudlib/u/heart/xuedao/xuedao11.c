//This xuedao11 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "����");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "northeast" : __DIR__"xuedao10",
      "south" : __DIR__"xuedao12",
      "west" : __DIR__"xuedao29",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/4");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}