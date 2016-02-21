// Room: /u/swordman/yangzhou/money
inherit ROOM;

void create ()
{
  set ("short", "扬州钱庄");
  set ("long", @LONG
这里是城里最有名的钱庄--扬州钱庄，利息虽低但决不拖欠。
听说钱庄老板和府衙有很深的渊源，流氓土匪一般都不来这找麻烦。
所以这里一向是生意很好。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yaolaoban.c" : 1,
]));
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xijie1",
]));

  setup();
}
