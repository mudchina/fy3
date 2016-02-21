// Room: /d/city2/bridge3.c

inherit ROOM;

void create()
{
	set("short", "桥底东侧");
	set("long", @LONG
这里是小桥西侧，一股寒风吹过，冷得你瑟瑟发抖，只想离开。
水流从桥底冲过,发出轰轰隆隆的响声,北面隔着水面就是红色的宫墙.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "westup" : __DIR__"bridge",
]));
	set("resource", ([ /* sizeof() == 1 */
  "water" : 1,
]));

	setup();
	replace_program(ROOM);
}
