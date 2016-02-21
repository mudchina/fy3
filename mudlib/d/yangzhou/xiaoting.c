// Room: /u/swordman/yangzhou/xiaoting
inherit ROOM;

void create ()
{
  set ("short", "接水亭");
  set ("long", @LONG
这里是建在湖水上的小亭，供人凭水小憩。亭匾题“接水亭”，楹
联曰：佳气溢芳甸，宿云澹野川。出亭就是长堤春柳。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/youke" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"jiedao2",
]));
  set("light_up", 1);

  setup();
}
