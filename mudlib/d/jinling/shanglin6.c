// Room: /u/cyj/room/shanglin
inherit ROOM;

void create()
{
  set ("short", "上林道");
  set ("long", @LONG
这里已是竟陵城外，往西就是著名的上林苑。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"shanglin5.c",
  "west" : __DIR__"chalu.c",
]));
  set("outdoors", "/u/cyj/room");
  setup();
}
