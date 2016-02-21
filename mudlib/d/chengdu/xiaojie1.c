// Room: /d/chengdu/xiaojie.c
// oooc 1998/06/21 

inherit ROOM;

void create()
{
	set("short", "小街");
	set("long", @LONG
这是一条青石板铺成的小街，路面非常干净。这是因为每天清
晨都会有工人把这里打扫一遍。朝东南边看,天气好的话，还可以
隐约看到风雨亭的一角。东边有个粽子店。
LONG
	);
set("outdoors","/d/chengdu");

	set("exits", ([
                "south" : __DIR__"xiaojie2",
                "northwest":__DIR__"xiaojie",
                "east" : __DIR__"zongzidian",
	]));

	setup();
	replace_program(ROOM);
}

