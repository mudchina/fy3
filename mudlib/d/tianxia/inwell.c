// Room: /d/new/tianxia/inwell
inherit ROOM;

void create()
{
  set ("short", "井底");
  set ("long", @LONG
高高的井壁围起一块圆形的天空,尘世的一切都离你很远.一根井绳直
垂下来.系着的一只水桶在水面上晃晃荡荡.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : "/d/sandboy/well",
]));
  setup();
}
