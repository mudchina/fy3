// Room: /d/huanggon/xiaogardon
inherit ROOM;

void create()
{
  set ("short", "小花园");
  set ("long", @LONG
王府中的小花园,院中是各色的牡丹,据说是因为牡丹富贵,所以康亲
王特别喜欢,花木中杂有小巧的座椅,亭子,假山.美不胜收,从此向西,是
王府的天井.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xiaogardon1",
  "west" : __DIR__"tianjin",
]));
  set("outdoors", "/d/huanggon");
  setup();
  replace_program(ROOM);
}
