// Room: /d/hangzhou/wanghu.c

inherit ROOM;

void create()
{
	set("short", "望湖亭");
	set("long", @LONG
一个四角小方亭,白色琉璃铺顶,水磨方砖铺地,亭中一边的栏杆旁
摆了几盆吊兰,玫瑰之类的花.从亭中看去,眼前是平静的西湖.背后是北
高山,向东北方有条小路弯弯曲曲.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"santan",
  "southwest" : __DIR__"pinghu",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dongpo.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
