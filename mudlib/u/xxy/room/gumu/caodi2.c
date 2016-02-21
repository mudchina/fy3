// caodi2.c 草地
// By Lgg,1998.9

inherit ROOM;

void create()
{
	set("short", "草地");
	set("long", @LONG
	这里是一片草地，草很深，几乎淹没了小腿。草间散布着一些奇
花，微风吹过，芬芳扑鼻。你听到时而有“嗡嗡嗡”的声音，看见有一些
个头奇大的白色的蜜蜂在草地上飞舞盘旋。
LONG
	);

	set("exits", ([
		"west" : __DIR__"caodi",
		"southeast" : __DIR__"hanshuitan",
		"eastup" : "/d/quanzhen/shijie9",
	]));

	set("objects", ([ 
		__DIR__"npc/yufeng" : random(3),
	]));
	
	setup();
	replace_program(ROOM);
}