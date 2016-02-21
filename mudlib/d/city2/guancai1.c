// Room: /city2/guancaidian.c

inherit ROOM;

void create()
{
	set("short", "棺材店");
	set("long", @LONG
这是一家棺材店，一进门，一股楠木味扑鼻而来。屋子里很阴
暗，桌子椅子都很破旧。往东是一间内室，一个三十出头的精壮汉
子挡在门口。
LONG );
	set("item_desc", ([
		"guancai" : "本店出售棺材，每个五十两黄金。\n",
	]));
	set("objects", ([
		"/d/city2/npc/gaoyanch" : 1,
	]));
	set("exits", ([
		"northwest" : __DIR__"alley2",
		"east"      : __DIR__"guancai2",
	]));
	setup();
	replace_program(ROOM);
}

