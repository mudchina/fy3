// Room: /d/huanggon/qingmutang
inherit ROOM;

void create()
{
  set ("short", "青木堂口");
  set ("long", @LONG
这里是天地会青木堂在京师的据点.从外观上看,只是一所普通的大
杂院.门前两个家丁模样的人坐在长凳上默默无语,一些红枣掉在地下,给
踩得稀烂.
LONG);

  set("outdoors", "/d/huanggon");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"yuanzi",
  "south" : __DIR__"tianwell",
]));
  setup();
  replace_program(ROOM);
}
