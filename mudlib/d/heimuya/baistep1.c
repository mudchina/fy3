//room: 
inherit ROOM;
void create()
{
  set("short","长廊");
  set("long", @LONG
这是条长长的走廊，两边是各类花木，教徒们在走廊边守卫着。你向
北边看去，远处就是白虎堂大厅。
LONG );
  set("exits",([
      "east" : __DIR__"dating2",
      "south" : __DIR__"baistep2",
  ]));
  set("objects",([
     __DIR__"npc/jiaotu"   :1,
  ]));
//  set("no_clean_up", 0);
  setup();
  replace_program(ROOM);
}
