// tynroad.c 桃园小路
// by Marz 

inherit ROOM;

void create()
{
	    
	set("short", "桃园小路");
	set("long", @LONG
	眼前豁然开朗，你轻松地走在桃园边的小路上。路上落英缤纷，一边是桃树林，
盛开着粉红的桃花，红云一片，望不到边。还可以看见蜜蜂「嗡嗡」地在花间飞上
飞下忙个不停，间或传来猿猴的叽咋声。这儿是武当山中的一条小路。
LONG
	);
	set("exits", ([
		"south" : __DIR__"taiziyan",
		"west" : __DIR__"nanyan",
		"east" : __DIR__"shesheng",
	]));
	set("objects", ([
                __DIR__"npc/shouyuan" : 1]));
	setup();
}
