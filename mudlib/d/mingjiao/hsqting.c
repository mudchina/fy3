//HSQTING.C

inherit ROOM;

void create()
{
	set("short", "洪水旗大厅");
	set("long", @LONG
这里是洪水旗的大厅, 
LONG
	);

	set("exits", ([
//		"enter" : __DIR__"hsqchanglang",
		"south" : __DIR__"hsqchanglang",
	]));

//	set("outdoors", "mingjiao");
set("objects",([
__DIR__"npc/tangyang":1,
__DIR__"npc/menwei1":4,
           ]));
	setup();
//	replace_program(ROOM);
}
