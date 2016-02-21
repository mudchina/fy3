// Room: /d/mingjiao/road1
inherit ROOM;

void create()
{
  set ("short", "山路");
  set ("long", @LONG
这是条群山环抱中的一条曲折山路，一直通向山的深处。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southup":__DIR__"road3",
  "north":__DIR__"road1",
]));
  set("outdoors", "/d/mingjiao");
  setup();
  replace_program(ROOM);
}
