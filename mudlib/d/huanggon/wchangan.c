// Room: /d/huanggon/wchangan
inherit ROOM;

void create()
{
  set ("short", "西长安街");
  set ("long", @LONG
西长安街是条东西走向的街道,因为正当城中,两边店铺很多,招牌林
立,游人不绝,街道的北边有士兵把守,却是京中康亲王的府地,向东去就是
西单,西面可出西铁门.
LONG);

  set("outdoors", "/d/huanggon");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"kangwangfu",
  "west" : __DIR__"wchangan1",
  "east" : __DIR__"xidan2",
]));
  setup();
  replace_program(ROOM);
}
