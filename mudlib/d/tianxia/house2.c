// Room: /d/tianxia/house2
inherit ROOM;

void create()
{
  set ("short", "卧室");
  set ("long", @LONG
卧室的角落中堆着一些女人的衣衫。房间中隐隐有股脂粉味。离
床不远的桌上倒了几个酒瓶，一堆鸡骨头还没有打扫干净。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"house",
]));
  setup();
}
