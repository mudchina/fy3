//eba
  

inherit ROOM;

void create()
{
	set("short", "漕帮");
	set("long", @LONG
这里是漕帮的总部，说是什么漕帮，其实就是几个恶霸勾结在一起在
菜场这一块地方收收保护费，帮人打打架。几个流氓正往里屋去。
LONG
	);

	set("exits", ([
		 
		"north" : __DIR__"canchang",
		"enter" : __DIR__"liwu",
		 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

