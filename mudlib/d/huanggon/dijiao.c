// Room: /d/huanggon/dijiao.c

inherit ROOM;

void create()
{
	set("short", "药铺地窖");
	set("long", @LONG
走下十多级台阶,推开一扇板门,这是个十来尺见方的小室,室中是张
矮榻.上面还残留着血迹.一盏煤油灯发出昏黄的灯光,把上面的室顶熏黑
了老大一块.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xutianch.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"neishi1",
]));

	setup();
	replace_program(ROOM);
}
