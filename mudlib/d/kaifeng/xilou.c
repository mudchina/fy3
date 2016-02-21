// Room: /d/kaifeng/xilou.c

inherit ROOM;

void create()
{
	set("short", "戏楼");
	set("long", @LONG
一座木头粗粗搭起的高台，台的后端用大的帘子遮了起来，那后头就
是戏子装扮上台的地方。由于是关帝庙，演的无非是桃园三结义，单骑走
千里。杯酒斩文聩等故事。
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/qingyi.c" : 1,
  __DIR__"npc/xiaosheng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"paifang",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
