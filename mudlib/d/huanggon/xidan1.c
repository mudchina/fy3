// Room: /d/huanggon/xidan1.c

inherit ROOM;

void create()
{
	set("short", "西单");
	set("long", @LONG
西单是居民区,只有些走街穿巷的小贩摇着货鼓四处走,多数的居民
家都关着门,道两边就是高高的墙壁,你抬眼看了看,西面是条小胡同,不
知道是通那的.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/yangzhou/npc/liumang.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"wdajie1",
  "north" : __DIR__"xidan2",
  "west" : __DIR__"yanghutong",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
