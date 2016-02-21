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
	"south":__DIR__"txmen",
		"west":__DIR__"ru6",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
