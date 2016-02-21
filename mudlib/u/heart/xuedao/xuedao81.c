// Room: /u/uuui/xuedao/xuedao81.c

inherit ROOM;

void create()
{
	set("short", "杂草地");
	set("long", @LONG
这里是一片草地，参差不齐的杂草在你的脚下被踩弯
了腰。南边是一条小溪，潺潺的流水声不停的在你的耳
边回响。东北方向是一片灌木从。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"xuedao114",
  "northeast" : __DIR__"xuedao82",
  "northwest" : __DIR__"xuedao80",
]));

	setup();
	replace_program(ROOM);
}
