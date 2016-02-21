// Room: /u/xxy/room/huizong
inherit ROOM;

void create()
{
  set ("short", "会宗堂");
  set ("long", @LONG
这个大殿内空空荡荡,仅在正中的地方摆了一张高台,上面摆了三个
牌位,分别是释迦牟尼的大弟子普贤菩萨,道教创始人的化身广成子,和陆
舆的牌位,取三教会宗之意
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"baoenshi",
  "north" : __DIR__"qifodian",
  "west" : __DIR__"qixiang",
]));
  setup();
  replace_program(ROOM);

}
