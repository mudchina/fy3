// Room: /d/huanggon/kezhanwoshi
inherit ROOM;

void create()
{
  set ("short", "客栈卧室");
  set ("long", @LONG
这是京都客栈内的一间普通卧室,由于人多,房间不够,你只能和别人
挤一下了.房间中只一张床铺,一张木桌,一张矮凳.墙角落中堆了些鸡毛稻
草,如果你觉得冷,可以盖这些东西.
LONG);

set("sleep_room",1);
set("hotel",1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"jingdukezhan",
]));
  setup();
  replace_program(ROOM);
}
