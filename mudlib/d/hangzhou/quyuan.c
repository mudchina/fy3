// Room: /d/hangzhou/quyuan.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "曲院风荷");
	set("long", @LONG
眼前是一片绿荷.细看去,亭亭如盖的荷叶之间点缀着粉色的 
荷花.随风微动,时有蜻蜓点点飞过.夏日风起，荷香沁人心脾.附 
近不远的一个作坊中传来阵阵酒香. 
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"dadao1.c",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}
