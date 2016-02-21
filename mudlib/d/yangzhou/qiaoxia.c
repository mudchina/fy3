// Room: /u/swordman/yangzhou/qiaoxia
inherit ROOM;

void create ()
{
  set ("short", "御码头");
  set ("long", @LONG
这里是运河上的一个忙碌的小船码头，看来并不起眼，但历代的皇帝
南幸扬州，都是乘船摆架于此，码头边的石碑上注：御码头，但年代已不
可考。来往好多船只都停泊于此，是扬州城的重要运输口岸。 
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/chuanlaoda" : 1,
  __DIR__"npc/chuanjia" : 1,
]));
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"qiao",
]));

  setup();
}
