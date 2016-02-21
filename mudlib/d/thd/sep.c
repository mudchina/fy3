// thd:sep.c

inherit ROOM;

void create()
{
      set("short", "绿竹林");
	set("long", @LONG
现在你置身于一大片无边的绿竹林中。你四周的竹子或粗或细，或长
或短形态各异，都错落有致的排列着。四周万籁俱寂，只听到风过竹叶的
沙沙声。置身于此你不由的静下来，想一想人生、宇宙的哲理。也只有在
这里你才能摒弃私心杂念，超脱俗世。这里除了竹子外，就是一些小花、
小草了，它们看来不起眼，确散发着淡淡的药香。从这里往西北可以望见
积翠亭。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "northwest" : __DIR__"green_pavilion",
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
			new(__DIR__"obj/flower8")->move(me);
         
		      message_vision("$N从花丛中摘起一朵美丽的小花。\n", me);
        		last_time=i;
	      }
      	else          
			message_vision("花丛中的花已经被摘光了，$N什么也没摘到。\n", me); 		
	}

	return 1;
}




