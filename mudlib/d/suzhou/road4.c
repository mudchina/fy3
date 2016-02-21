// Room: /u/o/oldsix/room/road4.c

inherit ROOM;

void create()
{
	set("short", "阴森小路");
	set("long", @LONG
这是条铺青砖的小路，路边是茂密的竹林。小路弯弯曲曲，是去大牢的必
经之路。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north" :__DIR__"shiziru",
	"south" :__DIR__"road5",
]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
