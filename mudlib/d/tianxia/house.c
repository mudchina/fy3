// Room: /d/tianxia/house
inherit ROOM;

void create()
{
  set ("short", "教习室");
  set ("long", @LONG
这是专门供训练帮众的教习的住处，现在所住的是总教习秦宁。屋子
用精细木料建造而成，看上去挺宽敞。这是前厅，几张上好的桌椅胡乱
摆着，后面还有间房间。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"house2",
  "south" : __DIR__"gardon2",
]));
  setup();
}
