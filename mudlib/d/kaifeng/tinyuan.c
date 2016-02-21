// Room: /d/kaifeng/tinyuan.c

inherit ROOM;

void create()
{
	set("short", "龙亭园");
	set("long", @LONG
一片花木葱郁的园林。园林的南北两边分别是扬家湖和潘家湖，湖
中碧波荡漾，湖边垂柳依依，芳草如茵。从此向东，是龙亭大殿，西
面是西大街道.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/youke.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"longting",
  "west" : __DIR__"wroad3",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
