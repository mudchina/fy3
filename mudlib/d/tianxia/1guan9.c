// Room: /d/tianxia/1guan9
#include <room.h>
inherit ROOM;

void create()
{
  set ("short", "走廊顶端");
  set ("long", @LONG
走廊到这就算头了，两扇紫铜色的木门遮住了后面的空间，门上
不大的两扇小窗户，勉强透进点光线来。照得这地方朦胧一片。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"gardon",
  "west" : __DIR__"1guan8",
]));
  create_door("east","厚木门","west",DOOR_CLOSED);
  setup();
}
