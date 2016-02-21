// Room: /d/dali/pengfu.c

inherit ROOM;

void create()
{
	set("short", "梁府");
	set("long", @LONG
一圈竹林围起一带红墙,几个懒散的叫化子在四周闲逛,红色的大门
半闭着,不见什么人出来.几只画眉鸟在竹稍叫得正欢.
LONG
	);
	set("outdoors", "/d/dali");
	set("exits", ([ /* sizeof() == 2 */
  "in" : __DIR__"inpengfu",
  "northeast" : __DIR__"qingchi",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
