// Room: /d/hangzhou/wuyuan.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "吴园");
	set("long", @LONG
一圈高大的淡灰色高墙围起了一个园子.抬头看时,能看到高大  
的林木森森.一条砖石铺成的小径一直通向两扇半掩着的院门.周围  
空无人家,从园中传来流水潺潺,百鸟鸣叫之声.  
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"huagang.c",
  "north" : __DIR__"dadao3.c",
]));

	setup();
	replace_program(ROOM);
}
