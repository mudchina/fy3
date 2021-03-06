// Room: /d/chengdu/beijie1.c

inherit ROOM;

void create()
{
	set("short", "北大街");
	set("long", @LONG
这是一条宽阔的青石街道，向南北两头延伸。北边是北
城门通向城外。南边显得很繁华热闹。东边是一座两层的楼
阁，挂着“陈麻婆豆腐”的招帘，门额上悬挂一方横匾“麻
到为止”四字擦得闪闪发亮，乃是陈麻婆老公--苏轼的手笔。
阵阵辣椒香味扑鼻而来,让你垂涎欲滴。西边是一座古朴的祠
堂，香火缭绕，游人络绎不绝,那就是川人所共同敬仰的武侯
祠。西南方有个如画的小潭。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "chengdu");
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"chenmapo",
  "west" : __DIR__"wuhou",
  "south" : __DIR__"beijie2",
  "north" : __DIR__"northchengmen",
]));

	setup();
	replace_program(ROOM);
}
