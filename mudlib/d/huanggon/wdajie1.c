// Room: /d/huanggon/wdajie1.c

inherit ROOM;

void create()
{
	set("short", "西大街");
	set("long", @LONG
这是条东西向的街道,向东穿过天安门广场.街道两边招牌林立,吆喝
声不断,因为是京城,治安很好,所以生意人挺多.北边就是西单,你看了看.
没什么人在街上走,看来此地多是住宅.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"wdajie",
  "north" : __DIR__"xidan1",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
