// thd:in_sea.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
      set("short", "大海");
	set("long", @LONG
你身处在无边无崖的大海中，同时你还在不停的往下沉。很快你就看
不到海面的景色了，你只能感到海水的颜色越来越深……
LONG
);  

	setup();
//	replace_program(ROOM);
}

void init()
{
	object obj1;
	if( interactive() ) 
	{
		remove_call_out("move_corpse");
		call_out("move_corpse", 1, obj1);
	}
}

void move_corpse(object obj1)
{
	object ob,room;

//	foreach(ob in all_inventory(environment()) ) 
//      {
	      room = load_object(__DIR__"nbeach");
		message("vision", "一具尸体被海浪推上了岸。\n",room);	
		obj1->move(__DIR__"nbeach");
//	}
}

