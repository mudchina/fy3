//xiuxishi
  

inherit ROOM;

void create()
{
	set("short", "休息室");
	set("long", @LONG
一个小小的休息室，没什么东西。你走到这里只想躺下好好休息一下
。床头柜上有小二沏好的浓茶。
LONG
	);
	set("no_fight", 1);
set("sleep_room",1);

	set("exits", ([
		"east" : __DIR__"yinghaoup",
		
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));
set("no_steal",1);

	setup();
	replace_program(ROOM);
}

