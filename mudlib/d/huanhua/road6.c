// Room: /d/new/huanhua/road6.c

inherit ROOM;

void create()
{
	set("short", "陡峭山道");
	set("long", @LONG
山道至此直竖而下,其势更显危峻,石阶仅容半脚.半脚凌空,稍不 
留心,形神俱灭.天边白云悠悠,空谷鸟声幽韵.风过树林,其声徐徐.由 
不人不兴"前无古人,后无来者"之叹! 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"road7",
  "northeast" : __DIR__"whitefeng",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/youke.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
