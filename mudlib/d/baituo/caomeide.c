// Room: /d/baituo/caomeide.c

inherit ROOM;

void create()
{
	set("short", "草莓地");
	set("long", @LONG
这里是一块草莓地，鲜红的草莓散落在绿草中，让人感到美妙惬意。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "baituo");
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/shanming.c" : 1,
  __DIR__"obj/caomei" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "northeast" : __DIR__"shulin1",
]));

	setup();
	replace_program(ROOM);
}
