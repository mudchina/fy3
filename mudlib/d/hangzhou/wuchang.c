// Room: /d/hangzhou/wuchang.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "石龙武场");
	set("long", @LONG
杭州鼎鼎大名的石龙武场就在你的眼前了.三道石阶之后就是高高的
门槛.两边的石狮很是威武.门前大树旁一根高高的旗杆上,[石龙武场]的
旗帜随风飘扬.从围墙围起的院子中传来练功时的喝喊声.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"dadao2.c",
  "north" : __DIR__"front_yard",
]));

	setup();
	replace_program(ROOM);
}
