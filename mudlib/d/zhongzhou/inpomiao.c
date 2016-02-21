// Room: /d/zhongzhou/inpomiao.c

inherit ROOM;

void create()
{
	set("short", "丐帮中州分舵");
	set("long", @LONG
破庙角落中散放着一些稻草和破棉被，正中的神像早已被人搬走，如
今被一帮叫化子占了地方，几只破瓦罐散落在庙中各处，原来是盛滴水的。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/gaibang/jian.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/zhongzhou");
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"guandimiao",
]));

	setup();
	replace_program(ROOM);
}
