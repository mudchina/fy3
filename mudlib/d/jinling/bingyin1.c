// Room: /u/cyj/room/bingyin1.c
inherit ROOM;

void create()
{
  set ("short", "内营");
  set ("long", @LONG
这里是统带城卫营的"城守"处理一城事务之处,等闲之人不得进入。若是
冒冒然闯入，可能会被;当成奸细抓起来。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chengshou.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"bingyin.c",
]));
  set("light_up", 1);
  setup();
}
