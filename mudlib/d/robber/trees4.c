// Room: /d/robber/trees4.c

inherit ROOM;

void create()
{
	set("short", "松柏林");
	set("long", @LONG
稀疏的一片松柏林,脚下是厚厚的落叶,一股腐烂的味道在林中弥漫,
向北面看去,还是那么稀稀落落的几棵树.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"trees5",
  "north" : __DIR__"trees3",
]));
set("outdoors","/d/jiangnan");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/robber4.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
