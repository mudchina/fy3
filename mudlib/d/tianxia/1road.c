// Room: /d/tianxia/1road
inherit ROOM;

void create()
{
  set ("short", "小路");
  set ("long", @LONG
鹅卵石铺就的小路，两边的杂草很久没人整理了，道上铺了一层落
叶，两边的树枝遮住了小路的上空。仔细看时，道上还能见到点点
血迹。向东去是三分教场。
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"1road2",
  "east" : __DIR__"jiaochang",
]));
  setup();
}
