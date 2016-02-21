// Room: /u/swordman/yangzhou/jiaowai.c

inherit ROOM;

void create()
{
	set("short", "郊外");
	set("long", @LONG
四周是无边的荒野地，看不见人影，也听不到声音，象是到了另一
个世界。一阵空虚寂寞涌上心头，你不由的加快了步伐。向西远远望去
是一座古城。
LONG
	);
	set("no_clean_up", 0);
	set("light_up", 1);
	set("outdoors", "/u/swordman");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"to_jinling",
  "west" : __DIR__"dongmen",
]));

	setup();
	replace_program(ROOM);
}
