// Room: /d/xxy/feixu 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "废墟");
  set ("long", @LONG
这是一片废墟,穿过这儿,就能看到那段已经退了色的红墙,墟墙之间,
却隔着半里路程.这半里路上,是长可及膝的荒草和泥沼,狐,鼠蹿行其间,蛇蝎
往来于内,夜间要想过去,须有些胆量.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"caodi",
]));
  set("outdoors", "/d/xxy");
  setup();
}
