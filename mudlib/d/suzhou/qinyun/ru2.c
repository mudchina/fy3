// Room: /u/oldsix/room1/ru1.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
鹅卵石铺成的小径，曲曲折折一直通向远方。小径两边山石花木，让人心旷
神怡。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south":__DIR__"ru1",
		"north" :__DIR__"keting",
]));
	set("objects",([
		__DIR__"npc/gengfu":1,
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
