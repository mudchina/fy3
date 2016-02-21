// Room: /d/huanggon/qianqiutin
inherit ROOM;

void create()
{
  set ("short", "千秋亭");
  set ("long", @LONG
耸立在假山之上的一座小亭,通体朱红色,顶上是一只玉雕白鹤,震翅
欲飞.亭中摆放白玉石桌椅,残棋一副,看来尚未下完.此去向东,是供奉道
教的钦安殿.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"qingandian",
]));
  set("outdoors", "/d/huanggon");
  setup();
  replace_program(ROOM);
}
