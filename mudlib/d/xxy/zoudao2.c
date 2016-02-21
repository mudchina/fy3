// Room: /d/xxy/zoudao2.c

inherit ROOM;

void create ()
{
  set ("short", "走道");
  set ("long", @LONG
一条长长的走道,两边是花圃,其中姹紫胭红,是各种奇怪的花木,发出
诱人的香气,如果你仔细观测,就能看到许多毒物在花木下栖息.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wushi.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"zoudao3",
  "south" : __DIR__"zoudao1",
]));
  set("outdoors", "/d/xxy");

  setup();
}
