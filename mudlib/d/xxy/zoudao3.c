// Room: /d/xxy/zoudao3.c
#include <room.h>
inherit ROOM;

void create()
{
	set("short", "走道");
	set("long", @LONG
一条长长的走道,两边是花圃,其中姹紫胭红,是各种奇怪的花木,发出
诱人的香气,如果你仔细观测,就能看到许多毒物在花木下栖息.向北是一间
巨石垒起的大屋,两扇厚木门关着.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"zoudao2",
  "north" : __DIR__"zhuting",
]));
       create_door("north","厚木门","south",DOOR_CLOSED);
	setup();
	replace_program(ROOM);
}
