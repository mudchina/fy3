// Room: /d/tianxia/gardon
#include <room.h>
inherit ROOM;

void create()
{
  set ("short", "小花园");
  set ("long", @LONG
一遛的梅树中间，有几间小房子。房子的周围种了些花，却杂七杂
八的，一点规格没有，树木的中间，原本挺好的草坪，也已经被践踏
得不成样了。西面两扇厚木门通向一栋大房子。
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"gardon2",
  "west" : __DIR__"1guan9",
]));
  create_door("west","厚木门","east",DOOR_CLOSED);
  setup();
}
