// Room: /u/swordman/yangzhou/ddajie
inherit ROOM;

void create ()
{
  set ("short", "东大街");
  set ("long", @LONG
这是一条宽阔的青石板街道，向东西两头延伸。东边不时地传来金属撞 
击声北边是一座简朴的院子，半月形的大门上方写着“扬州书院”四个
烫金大字，苍劲有力。里面不时地传来学生们抑扬顿挫的读书声。
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/liumang" : 1,
]));
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"ddajie1",
  "west" : __DIR__"guangchang",
  "north" : __DIR__"shuyuan",
  "south" : __DIR__"qiao",
]));

  setup();
}
