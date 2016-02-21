
inherit ROOM;

void create()
{
	set("short", "小道");
	set("long", @LONG
这是条通往大海之滨的小道，道路两旁是整整齐齐的杨树林。
LONG );
	set("exits", ([
		"east"  : __DIR__"haigang",
		"west" :__DIR__"road1",
	]));
	set("objects",([
		"/d/taishan/npc/tiao-fu" : 1,
	]));
//	set("no_clean_up", 0);
 	set("outdoors", "city2");
	setup();
	replace_program(ROOM);
}



