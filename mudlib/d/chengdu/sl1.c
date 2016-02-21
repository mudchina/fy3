// Room: /d/chengdu/sl1
inherit ROOM;

void create ()
{
  set ("short", "山路");
  set ("long", @LONG
这是条连接成都与黑目崖的山路。由于黑目崖在江湖上名声极恶，
黑白两道都极少与黑目崖的人打交道，此路由于行人稀少，已杂草从生
，如不仔细辨认很容易迷路。
LONG);

  set("outdoors", "/d/chengdu");
  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"dadao7",
  "northwest" : __DIR__"sl2",
]));

  setup();
}
