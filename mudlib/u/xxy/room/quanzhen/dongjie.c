// dongjie.c 东街


inherit ROOM;

void create()
{
	set("short", "东街");
	set("long", @LONG
	这里是长安镇的东街，往东走就是长安东门了。长安镇是个小城
镇，不算繁华，街上的行人也很稀少。北面是一家客栈，客栈门口挂着半
副‘鸡鸣早看天’的对联，上联已经被撕掉了。南面是一座大宅院，朱红
大门上布满铜钉。从这里往西走，就是长安镇的中心了。
LONG
	);

	set("exits", ([
		"east" : __DIR__"dongmen",
		"west" : __DIR__"zhongxin",
		"north" : __DIR__"kedian1",
		"south" : __DIR__"fu-damen",
	]));

	set("objects", ([
		__DIR__"npc/seller" : 1,
	]));

	setup();
	replace_program(ROOM);
}