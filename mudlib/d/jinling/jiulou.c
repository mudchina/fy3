// Room: /u/cyj/room/jiulou2
inherit ROOM;

void create ()
{
  set ("short", "聚星楼");
  set ("long", @LONG
聚星楼是竟陵城里唯一的一家酒楼。生意一年四季都很好，大都是来
自五湖四海的江湖朋友。自然价格也很贵，普通人是消费不起的。楼下是
大堂，楼上则是包厢和雅座。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiaoer.c" : 1,
]));
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"changjie4.c",
  "up" : __DIR__"jiulou2.c",
]));

  setup();
}
