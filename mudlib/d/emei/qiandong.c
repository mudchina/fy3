// Room: /d/room/qiandong
inherit ROOM;

void create()
{
  set ("short", "前洞");
  set ("long", @LONG
四壁的岩石上隐现点点的金光,据说这就是千金难求的玄铁岩,头顶
有一个小圆洞,正好漏进的阳光象柱子一样投在地面的一个太极图上,你
感觉这里充满了玄机,东面就是膳室.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"cooking",
  "north" : __DIR__"dongzhong1",
  "south" : __DIR__"dongzhong",
]));
  setup();
}
