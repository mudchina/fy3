// Room: /u/swordman/yangzhou/jlroad
inherit ROOM;

void create ()
{
  set ("short", "扬州路");
  set ("long", @LONG
你走在一条青石大道上，北边隐约可见到扬州城的城墙。 
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yzroad",
]));
  set("outdoors", "/u/swordman");

  setup();
}
