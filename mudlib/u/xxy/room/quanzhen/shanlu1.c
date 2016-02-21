// shanlu1.c 山路


inherit ROOM;

void create()
{
	set("short", "山路");
	set("long", @LONG
	从长安西门出来，路势变急了，这是一条用石块铺成的山路。路两
旁光秃秃的，没有什么树木，全是一块块的大石头。这条路好象通往前面的
终南山上。北面有一个小村庄，村中正升起冉冉的炊烟。
LONG
	);

	set("exits", ([
		"eastup" : __DIR__"shanlu2",
		"northup" : __DIR__"xiaocun",
		"southwest" : __DIR__"ximen",
	]));

	setup();
	replace_program(ROOM);
}