// Room: /d/lingjiu/liangong.c

inherit ROOM;

void create()
{
	set("short", "戏凤阁");
	set("long", @LONG
这里是灵鹫宫弟子练功的地方。有几个妙龄女子正在专心致致地练武
，有几个手持竹剑,在互相拆招,身法灵动，犹如穿花蝴蝶一般，你不禁看
花了眼，别的人则坐在地上的蒲团上苦练内力。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"changl4",
]));
	set("objects", ([ /* sizeof() == 2 */
  "/daemon/class/lingjiu/tbluan.c" : 1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
