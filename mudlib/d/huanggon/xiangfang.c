// Room: /d/huanggon/xiangfang
inherit ROOM;

void create()
{
  set ("short", "厢房");
  set ("long", @LONG
厢房是平时招待客人住宿的地方,装饰得十分雅致,西面是两扇桑皮
纸糊了的窗户,两张太师椅子靠桌子摆着,一张大木床就摆在屋子的中间.
东边房门开处,就能看到后院.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"yuanzi",
]));
  setup();
  replace_program(ROOM);
}
