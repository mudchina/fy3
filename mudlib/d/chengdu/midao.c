// Room: /d/chengdu/midao.c

inherit ROOM;

void create()
{
	set("short", "山洞底");
	set("long", @LONG
这是一个极深的山洞。四处死气沉沉的，你急得快哭了起
来。洞壁(wall)上满是滑溜溜的青苔。很奇怪的是这里有根长
绳(string)，绳端系着一个大石头(stone)。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "out" : "/d/jinshe/yongdao1",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
