// Room: /d/zhongzhou/bangban.c

inherit ROOM;

void create()
{
	set("short", "办公室");
	set("long", @LONG
这是帮办的办公室，陈帮办正低头看着案宗。你站站冽冽的走上前
去，摸摸口袋的银两，心想：哎，收人钱财，帮人消灾。他们应该可以
帮我办成事吧。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chenbangban.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xunbu",
]));

	setup();
	replace_program(ROOM);
}
