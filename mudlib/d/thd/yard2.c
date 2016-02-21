// thd:yard2.c

inherit ROOM;

void create()
{
      set("short", "后花园");
	set("long", @LONG
这是个花园。在桃花岛中，你只有在这里才能看到除桃花树和竹子之
外的花草树木。这个园子里的花草都是黄岛主的朋友送给他的名贵品种。
你在这里能看到不少稀奇古怪的花草，有的还有毒呢。你在园中走动之时
，可要当心一点嗷。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/huang_yaoshi" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
	    "south" : __DIR__"yard1",
	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

int last_time=-10000;

void init()
{
	add_action("do_zhai", "zhai");
}

int do_zhai(string arg)
{
	object me;
	int i;

	if((arg!="hua")&&(arg!="花")) return 0;

	me=this_player();
      if( me->over_encumbranced() ) 
		write("你已经负荷过重了，没法再拿花了 :-( \n");
	else
	{
		i=time();
	      if((i-last_time)>300)
	      {
			new(__DIR__"obj/flower9")->move(me);
         
		      message_vision("$N从花丛中摘起一朵美丽的小花。\n", me);
        		last_time=i;
	      }
      	else          
			message_vision("花丛中的花已经被摘光了，$N什么也没摘到。\n", me); 		
	}

	return 1;
}




