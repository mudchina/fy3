// Room: /d/new/huanhua/hqiuqiao.c

inherit ROOM;

void create()
{
	set("short", "杭秋桥");
	set("long", @LONG
碧湖映潭，何其新翠。湖水宁静尤如一面古镜,鱼纹不起,桥的尽
头有一座水阁,一阵笛声从水阁中传来.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"hqiuqiao1",
  "northwest" : __DIR__"guihu",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
