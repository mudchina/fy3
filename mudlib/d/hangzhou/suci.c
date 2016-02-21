// Room: /d/hangzhou/sudi.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "苏堤春晓");
	set("long", @LONG
你现在脚下的这条长堤就是苏堤了,杭州知府苏东坡化工20万, 
除葑草,挖淤泥,筑成了这条从南山到北山横贯湖面长堤，四时风光 
各异,尤以春季清晨赏景为佳. 
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"baidi3.c",
  "east" : __DIR__"baidi2.c",
]));
	set("objects",([
		"/npc/man2":2,
	]));
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}
