// Room: /u/swordman/yangzhou/xiling
inherit ROOM;

void create ()
{
  set ("short", "栖陵塔");
  set ("long", @LONG
你现在站在高耸入云的栖陵塔下，只见塔门紧闭，满地落叶。
你不禁纳闷：为何没有人来打扫呢？院里四下无人，只有临院飘
来一缕香烟，你打了个寒战，好象感觉到了些什么。
LONG);

  set("light_up", 1);
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"damingshi",
]));

  setup();
}
