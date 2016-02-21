// Room: /d/yangzhou/to_zhongzhou2
inherit ROOM;

void create()
{
  set ("short", "中州道");
  set ("long", @LONG
这是条连接南北的交通要道，来往行人不断。道旁的树木下多有
作小生意的商人，茶水摊。向南是中州城，北面通向扬州。
LONG);

  set("outdoors","zhongzhou");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"to_zhongzhou3",
  "north" : __DIR__"to_zhongzhou",
]));
  setup();
}
