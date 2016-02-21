// Room: /d/kaifeng/zhulin1.c

inherit ROOM;

void create()
{
	set("short", "丐帮开封分舵");
	set("long", @LONG
你走进竹林中的小茅屋,打量了一下,在茅屋仅是用茅草覆顶,四边
的墙壁是用一根根大毛竹打入地下而成的,屋中的桌椅也都是翠竹所制,
桌上放的一只大茶壶是用整个竹根雕成的.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/gaibang/peng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"zhulin",
]));

	setup();
	replace_program(ROOM);
}
