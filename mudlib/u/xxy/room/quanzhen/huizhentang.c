// huizhentang.c 会真堂


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "会真堂");
	set("long", @LONG
	这里是大堂旁边的一个侧厅，也是接待重要客人的地方。厅不大，
只摆放着一张桌子和几把椅子。桌上摆放着一盆青松山石的盆景，墙壁上挂
着一些字画。
LONG
	);

	set("exits", ([
		"east" : __DIR__"cetang",
		"north" : __DIR__"wanwutang",
		"south" : __DIR__"datang1",
	]));


	//set("objects",([
	//	__DIR__"npc/daotong" : 1+random(3),
	//]));

	setup();
	replace_program(ROOM);
}