// Room: /d/huanggon/guangchang.c

inherit ROOM;

void create()
{
	set("short", "广场");
	set("long", @LONG
这是天安门广场,地上铺着平实的麻石,垒得平整,北边天安门是进
入皇城的大门,广场前一条东西向的街道,东是东大街,西是西大街,南边
不远就是天桥.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  "/d/huashan/npc/youke.c" : 1,
  "/d/huashan/npc/haoke.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"tiananmen",
  "south" : __DIR__"sdajie",
  "east" : __DIR__"edajie",
  "west" : __DIR__"wdajie",
]));

	setup();
	replace_program(ROOM);
}
