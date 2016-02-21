// wuchang1.c 武场


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "武场");
	set("long", @LONG
	这里是全真教的演武场，地下的青砖本来铺的整整齐齐，却不
知道被谁踩出了几十个大大小小的凹坑。看的出来，这里成年累月的有
弟子修炼掌法步法，天长日久，地下就踩出了凹坑。
LONG
	);

	set("exits", ([
		"south" : __DIR__"wuchang2",
		"north" : __DIR__"houtang2",
		"southeast" : __DIR__"xiuxishi",
	]));

	setup();
	replace_program(ROOM);
}