// Room: /d/kaifeng/daoxiang.c

inherit ROOM;

void create()
{
	set("short", "稻香居");
	set("long", @LONG
稻香居有三百年的历史了。从这栋楼外面黑黑的招牌旗就能看出来。
不过里面的食客还是挺多。十多张桌子坐满了人。楼上当然有雅座，
不过是要有一定身份地位的人才能上。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"daoxiang2",
  "west" : __DIR__"road2",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  "/d/yangzhou/npc/xiaoer.c" : 1,
  __DIR__"npc/shike.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
