// Room: /d/zhongzhou/dongmeng.c

inherit ROOM;

void create()
{
	set("short", "东城门");
	set("long", @LONG
这里是中州的东城门。出城是一条大驿道，好多外地到中州的人都
从这里进中州城，官府在这里设关卡查问过往行人。一到局势不稳的时
候这里就特别的紧张。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : "/d/sandboy/to_zhongzhou",
  "west" : __DIR__"yanlingdong2",
]));
	set("outdoors", "/d/zhongzhou");

	setup();
	replace_program(ROOM);
}
