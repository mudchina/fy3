// Room: /d/huanggon/xiaogardon1
inherit ROOM;

void create()
{
  set ("short", "小花园");
  set ("long", @LONG
王府中的小花园,园中建了副秋千,是平时家中女眷流连的处所.四
边无非是些花木,西面是后花园,南边穿过月洞门可以去王府天井.北边
不远是所精致的小屋.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"kangxiaowu",
  "west" : __DIR__"hougardon",
  "south" : __DIR__"xiaogardon",
]));
  set("outdoors", "/d/huanggon");
  setup();
  replace_program(ROOM);
}
