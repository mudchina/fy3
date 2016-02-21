// Room: /d/huanggon/bukufang.c

inherit ROOM;

void create()
{
	set("short", "布库房");
	set("long", @LONG
满人崇尚摔跤,布库房就是武士练习摔跤的地方,房子中央铺了厚实
的垫子,边上是几个皮人和沙袋,一圈牛油蜡烛照得房中大见光明,几个小
太监在一个胖大武士的指点下正在练习.
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yuhuayuan1",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/pangwushi.c" : 1,
  __DIR__"npc/xiaotaijian.c" : 2,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
