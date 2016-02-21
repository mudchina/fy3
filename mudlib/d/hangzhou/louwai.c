// Room: /d/hangzhou/louwai.c

inherit ROOM;

void create()
{
	set("short", "楼外楼");
	set("long", @LONG
楼外楼是杭州首曲一指的大酒楼.这里的大师傅所作的[宋嫂鱼]远近
闻名.不过价钱不菲,是有钱人才能来的地方.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"erlou",
  "northwest" : __DIR__"liulang",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/huoxiaoyu.c" : 1,
]));
	set("valid_startroom", 1);

	setup();
	replace_program(ROOM);
}
