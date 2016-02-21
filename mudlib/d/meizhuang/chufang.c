// Room: /d/suzhou/meizhuang/chufang.c

inherit ROOM;

void create()
{
	set("short", "厨房");
	set("long", @LONG
这儿是梅庄的厨房。除了为四位庄主准备饭菜之外，当然大部分时间
都是忙着为本庄弟子准备伙食。虽然梅庄规定了开饭时间，但不少弟子还
是趁着厨师们闲聊之机，偷偷找些东西以备断粮之豫。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"shibanlu1",
]));
	set("objects",([
	__DIR__"obj/chujia":1,
	__DIR__"npc/chushifu":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
