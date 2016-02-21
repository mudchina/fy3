// Room: /d/new/robber/mudroad.c

inherit ROOM;

void create()
{
	set("short", "黄泥路");
	set("long", @LONG
一条穿村过镇的黄泥小路,两边的青草早已枯黄,远处村庄中的狗吠声声,唤
不醒这寂寞原野的宁静.一眼望去,黄泥路七拐八弯,也不知通向哪!
LONG
	);
set("outdoors","/d/jiangnan");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : "/d/sandboy/well",
  "northeast" : __DIR__"mudroad1",
]));

	setup();
	replace_program(ROOM);
}
