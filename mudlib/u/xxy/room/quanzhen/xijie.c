// xijie.c 西街


inherit ROOM;

void create()
{
	set("short", "西街");
	set("long", @LONG
	长安镇的西面是贫苦百姓的聚居区，西街比起其他几条街道来也显
得破朽杂乱得多。街南面是一座年久失修的小庙，已经摇摇欲坠了。北面是
一户低矮的茅屋，西面是长安的西门。从这里转而往东，就走到长安镇的中
心了。
LONG
	);

	set("exits", ([
		"east" : __DIR__"zhongxin",
		"north" : __DIR__"minju2",
		"south" : __DIR__"xiaomiao",
		"west" : __DIR__"ximen",
	]));

	set("objects", ([
		__DIR__"npc/punk" : 1,
	]));

	setup();
	replace_program(ROOM);
}