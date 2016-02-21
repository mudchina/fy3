// Room: /d/zhongzhou/wendingnan3.c

inherit ROOM;

void create()
{
	set("short", "文定南街");
	set("long", @LONG
这是中州城文定南街，宽敞的街道看的人不竟心情一畅。西面有一家
不小的房子，两个礼仪小姐绽放出迷人的微笑。门口招牌上写着休闲中心
四个大字。肯定是一个放松的好地方。东北角有条黑胡胡的小胡同。
LONG
	);
	set("outdoors", "/d/zhongzhou");
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("exits", ([ /* sizeof() == 5 */
  "south" : __DIR__"wendingnan4",
  "northeast" : __DIR__"hutong",
  "east" : __DIR__"nameroom",
  "west" : __DIR__"xiuxian",
  "north" : __DIR__"wendingnan2",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
