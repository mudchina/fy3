// Room: /d/kaifeng/fangzhang.c

inherit ROOM;

void create()
{
	set("short", "方丈室");
	set("long", @LONG
方丈室相对来说比较简单，正中的墙面上是个大大的『佛』字。地
上铺着一张大席子，一张矮几就放在席子中间。两边是两个锦垫。在
靠里面的地方，有个蒲团，边上是个小木鱼，据说方丈大师修为精深
每天只需打坐片刻就精力充沛。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xiaoyuan",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhiqing.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
