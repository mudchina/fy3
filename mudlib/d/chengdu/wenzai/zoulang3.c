//bye enter

inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
你走在一条长长的走廊上，上面雕梁画柱，飞檐琉璃，穿行其
间，心情舒畅。往西是有个厨房，往东是后院。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"zoulang2",
  "northeast" : __DIR__"zoulang4",
  "east" : __DIR__"houyuan",
]));

  setup();
}
