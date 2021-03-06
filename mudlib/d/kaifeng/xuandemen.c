// Room: /d/kaifeng/xuandemen.c

inherit ROOM;

void create()
{
	set("short", "宣德门");
	set("long", @LONG
宣德门是开封的北城门，由于这里历来是皇城所在。城墙建筑得格
外牢固。两边的藏兵洞主可容千人，其作用是当敌人攻破城门之时，由
伏兵杀出，截杀敌人。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guanbing.c" : 2,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road6",
  "north" : __DIR__"jiaowai",
]));

	setup();
	replace_program(ROOM);
}
