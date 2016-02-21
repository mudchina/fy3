// Room: /d/kaifeng/guandi.c

inherit ROOM;

void create()
{
	set("short", "关帝庙");
	set("long", @LONG
关帝庙前一个老大的铁香炉，因为关老爷一向忠义守信。所以商人们
订了协议总要拜一下关帝爷。许多希望能在武举中得胜的人，也都要到这
庙来烧香。毕竟关帝又被称为武圣。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/guanyu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"paifang",
]));

	setup();
	replace_program(ROOM);
}
