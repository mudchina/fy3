// Room: /d/hangzhou/hongying.c

inherit ROOM;

void create()
{
	set("short", "虹影桥");
	set("long", @LONG
虹影桥如越女飞袖,彩虹卧波,连接两岸,由于桥势低矮,据说常有鲤鱼
飞越桥面,桥柱之上镂刻花纹,精致异常.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"shuangf",
  "north" : __DIR__"baidi3",
]));
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}
