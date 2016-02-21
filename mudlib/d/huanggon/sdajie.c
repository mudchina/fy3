// Room: /d/huanggon/sdajie.c

inherit ROOM;

void create()
{
	set("short", "南大街");
	set("long", @LONG
这是条南北方向的街道,道路两边是各类的店铺,因为是京城,各类东
西都比较齐全,此地向北是片开阔的广场,南边很多人聚齐在一起,看上去
很热闹.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"miaofa",
  "south" : __DIR__"sdajie1",
  "north" : __DIR__"guangchang",
]));

	setup();
	replace_program(ROOM);
}
