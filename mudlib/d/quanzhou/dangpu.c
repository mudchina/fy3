// Room: /d/quanzhou/dangpu.c

inherit ROOM;

void create()
{
	set("short", "当铺");
	set("long", @LONG
宽阔的大厅分隔成两部分,一边高高的柜台,上面还装着铁栅栏,里面
的人正不耐烦地数着铜钱,写着当票.外面是苦苦恳求的穷人或偷偷摸摸的
地痞,多半是从哪捞到了些什么.这就是泉州城的当铺.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"wstreet2",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/sunchaofeng.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
