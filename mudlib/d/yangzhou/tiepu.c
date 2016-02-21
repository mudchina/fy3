// Room: /u/swordman/yangzhou/tiepu
inherit ROOM;

void create ()
{
  set ("short", "打铁铺");
  set ("long", @LONG
这是一家打铁铺，铁匠们正抡着大锤，打造着各种铁器。左侧
货架上满是打好的家用铁器，右手货架上是常用的一些兵器，象钢
刀，短剑，匕首等。
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wangtiejiang" : 1,
]));
  set("outdoors", "x");
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"ddajie1",
]));

  setup();
}
