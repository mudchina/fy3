// Room: /d/zhongzhou/yanling2.c

inherit ROOM;

void create()
{
	set("short", "延陵西路");
	set("long", @LONG
这里就是延陵东路，是中州的一条老街。两边的房屋看上去已经很陈
旧了。路上冷冷清清的，偶尔有一两个人路过。再往前走，就能隐隐的看
见西城楼了。要是想出城的话，就要赶紧走了。要不然等城门关了，想出
城都不行了。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/zhongzhou");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"gongyuan4",
  "west" : __DIR__"chenglou",
  "east" : __DIR__"yanling1",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiaofan" : 1,
]));

	setup();
	replace_program(ROOM);
}
