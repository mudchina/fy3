// guandao1.c 官道


inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
	这是一条大道，西面通往长安镇。道上的行人很多，大多是低着
头自己赶自己的路。忽然在你的身后响起得得的马蹄声，不一会儿，几匹
骏马从你身边飞驰而过，掠起了一片黄沙。
LONG
	);

	set("exits", ([
		"northeast":"/d/jindezheng/to_qz",
		"west" : __DIR__"guandao2",
	]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}
