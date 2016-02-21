// Room: /u/swordman/yangzhou/tingxiao
inherit ROOM;

void create ()
{
  set ("short", "听萧园");
  set ("long", @LONG
这里是路边的一座小酒店，因靠近荒野，酒客也不是很多，但
好象客店的老板很有钱，伙计也都很精神。当街一个“酒”字招牌，�
白底黑字，非常醒目。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/txlaoban" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"jiedao4",
]));
  set("light_up", 1);

  setup();
}
