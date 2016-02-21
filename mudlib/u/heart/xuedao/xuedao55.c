// Room: /u/uuui/xuedao/xuedao55.c

inherit ROOM;

void create()
{
	set("short", "绿草坪");
	set("long", @LONG
这里是一片草坪，细软的长长草叶铺满了地面，走
在上面就好象踏在云端，感觉十分惬意。草坪中开着点
点的白色小小的野花，虽然简单不华丽，但是显得十分
素净。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xuedao56",
  "west" : __DIR__"xuedao54",
]));

	setup();
	replace_program(ROOM);
}
