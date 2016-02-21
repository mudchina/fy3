// Room: /d/hangzhou/duanqiao.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "断桥残雪");
	set("long", @LONG
这是一座青石桥,桥下湖水荡漾,远山近水,尽收眼底.过桥向西
就是白堤.据说冬日雪霁之时,桥阳面冰雪消融,而阴面仍然玉砌银铺.
从远处观望,有桥与堤断之感.故名.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/xuxian.c" : 1,
  __DIR__"npc/baisuzhen.c" : 1,
]));
	set("outdoors", "/d/hangzhou");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"dongmen.c",
  "west" : __DIR__"baidi1.c",
]));

	setup();
	replace_program(ROOM);
}
