// zhongxin.c 中心广场


inherit ROOM;

void create()
{
	set("short", "中心广场");
	set("long", @LONG
	这里是长安镇的中心广场，长安镇是个小镇，只有四条大街--分
别是东街，西街，南街和北街，都在这里汇合。走到这里，路上的行人多
了些，见了你都和和气气地拱手为礼。
LONG
	);

	set("exits", ([
		"east" : __DIR__"dongjie",
		"west" : __DIR__"xijie",
		"north" : __DIR__"beijie",
		"south" : __DIR__"nanjie",
	]));

	set("objects", ([
		__DIR__"npc/liumang" : 2,
	]));

	setup();
	replace_program(ROOM);
}