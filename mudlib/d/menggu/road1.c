// Room: /d/menggu/road1.c

inherit ROOM;

void create()
{
	set("short", "营帐间");
	set("long", @LONG
举目所见,那都是密密麻麻的营帐,一个连着一个,蒙古部落游牧为生,
平时所住就是蒙古包,拆解方便.两边有道通向几个帐幕,分别是亲卫和大将
们的住所,南面是辕门,几面旌旗迎风招展.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qingwei1.c" : 1,
]));
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"road",
  "east" : __DIR__"road2",
  "west" : __DIR__"road3",
  "south" : __DIR__"yuanmen",
]));
	set("outdoors", "/d/menggu");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
