// music 泰山脚下

inherit ROOM;

void create ()
{
  set ("short", "泰山脚下");
  set ("long", @LONG
	这里是五岳之首的泰山脚下，是连接北方各地的交通要道。
从这里一直向南到名城扬州，向西通往全真教派总坛，不过目前正
在修路，暂时改道。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiaofan" : 1,
]));
  set("outdoors", "/d/taishan");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"to_yz1",
]));

  setup();
}
