// Room: /d/quanzhou/yamen.c

inherit ROOM;

void create()
{
	set("short", "泉州府");
	set("long", @LONG
泉州府的大门口站着几个看门的衙役,手中拿着铁尺和木棍,高高的 
门坎令人望而生威,门口左边摆着一面大鼓. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"datang",
  "south" : __DIR__"estreet1",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yayi.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
