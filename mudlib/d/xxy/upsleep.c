// Room: /d/xxy/upsleep 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "寝室");
  set ("long", @LONG
地上是深红的波斯地毯,屋角的一只兽香炉内,安魂香袅袅上升,一张碧玉榻
铺上了带条纹的虎皮.你真想睡上一觉.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"up1",
]));
  set("sleep_room",1);
  setup();
}
