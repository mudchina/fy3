// shijie8.c 石阶


inherit ROOM;

void create()
{
	set("short", "石阶");
	set("long", @LONG
	这是一条整齐的石板路，依山而建，随着山势的曲折蜿蜒曲折。由
于山势陡了，当初修建这条石阶时肯定费了不小的功夫。走到这里，已经可
以看见全真教重阳观的檐角了。
LONG
	);

	set("exits", ([
		"northdown" : __DIR__"shijianyan",
		"southup" : __DIR__"shijie9",
	]));

set("outdoors","/d/quanzhen");
	set("objects",([
		__DIR__"npc/youke" : 1,
		__DIR__"npc/xiangke" : 1,
	]));

	setup();
	replace_program(ROOM);
}
