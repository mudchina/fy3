// Room: /u/swordman/yangzhou/bingying
inherit ROOM;

void create ()
{
  set ("short", "兵营大门");
  set ("long", @LONG
你正站在兵营的门口，面对着一排简陋的营房，可以看到穿着制服的官兵 
正在操练，不时地传来呐喊声。老百姓是不允许在此观看的，你最好赶快走开。 
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bingyong" : 2,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"nandaj3",
  "north" : __DIR__"bingying2",
]));
  set("outdoors", "/u/swordman");

  setup();
}
