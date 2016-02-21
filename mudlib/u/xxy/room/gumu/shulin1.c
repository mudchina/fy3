// shulin1.c 树林
// By Lgg,1998.9

inherit ROOM;

void create()
{
	set("short", "小树林");
	set("long", @LONG
	这是一片小树林，周围的树木都很高。间杂着一些叫不出名字的
鲜花，五彩缤纷。你隐隐地有些担心起来：不会迷路了吧，转头间却看见
东南边似乎有一条小路，隐藏在树丛之中。
LONG
	);

	set("exits", ([
		"southwest" : __DIR__"shulin2",
		"northeast" : "/d/quanzhen/shanlu4",
	]));
	
	setup();
	replace_program(ROOM);
}
