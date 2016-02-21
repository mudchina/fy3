// Room: /d/jinling/fengyage.c

inherit ROOM;

void create()
{
	set("short", "风雅阁");
	set("long", @LONG
慢走！你对自己说道。眼前这座建筑……，只见雕梁画栋，披红挂绿，
窗纱上和墙上还画着“妖精打架”图。不好！少儿不宜，快遛！
。
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/dashou.c" : 2,
  __DIR__"npc/laobao.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"hutong2.c",
]));

	setup();
	replace_program(ROOM);
}
