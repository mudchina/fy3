//room: 
inherit ROOM;
void create()
{
  set("short","长廊");
  set("long", @LONG
这是条长长的走廊，两边是各种花木，不时有跨了刀剑的日月教徒走过。
北边就是白虎堂大厅。
LONG );
  set("exits",([
     "north" : __DIR__"baistep1",
      "south" : __DIR__"baihutang",
  ]));
  set("no_clean_up", 0);
  setup();
  replace_program(ROOM);
}
