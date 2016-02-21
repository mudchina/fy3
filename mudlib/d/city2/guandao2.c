// Room: /d/city2/guandao1
inherit ROOM;

void create()
{
  set ("short", "官道");
  set ("long", @LONG
这是条连接关外的大道，南边通往京城。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" :__DIR__"shancharoad",
  "south":__DIR__"guandao1",
]));
  set("outdoors", "/d/city2");
  setup();
  replace_program(ROOM);
}
