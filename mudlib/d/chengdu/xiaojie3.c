// Room: /d/chengdu/xiaojie2.c
// oooc 1998/06/21 

inherit ROOM;

void create()
{
	set("short", "小街");
	set("long", @LONG
这是一条青石板铺成的小街，路面非常干净。这是因为每天清
晨都会有工人把这里打扫一遍。东边是风雨亭，东南是个酿酒屋，
西南外则是个教堂。
LONG
	);
set("outdoors","/d/chengdu");

	set("exits", ([
                "eastup" : __DIR__"fengyuting",
                "southeast" : __DIR__"niangjiuwo",
                "southwest" : __DIR__"jiaotang",
                "west" : __DIR__"xiaojie2",
	]));

	setup();
	replace_program(ROOM);
}

