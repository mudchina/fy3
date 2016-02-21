// Room: /u/cyj/room/changjie.c
inherit ROOM;

void create()
{
  set ("short", "长街");
  set ("long", @LONG
这里是竟陵城的主要街道，由于竟陵城南北长而东西短，所以就行成
了这条长达两里的街道。这也是竟陵最繁华的商业街。东南面的城墙脚
下有一座小屋,木门关的紧紧的。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"changjie1.c",
  "south" : __DIR__"chengmen.c",
  "southeast" : __DIR__"gengwu.c",
]));
set("outdoors","/d/jingling");
  setup();
}
