// Room: /d/huanggon/jubaoge.c

inherit ROOM;

void create()
{
	set("short", "聚宝阁");
	set("long", @LONG
聚宝阁的后台老板据说是宫中有势力的太监.这消息不知真假,不过
宫中的太监经常光顾此店,店中的玻璃柜子中摆着各类珠宝玉器,金饰古
董.映着灯光,直晃得人眼花.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/longweifeng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wangfujing2",
]));

	setup();
	replace_program(ROOM);
}
