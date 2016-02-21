// thd:jinzhen.c
// 97.7.18 by Aug
//#include <localtime.h>

inherit ROOM;

void init()
{
	add_action("do_yell", "yell");
}

int do_yell(string arg)
{
	object me;
	int i;

      if((arg!="out")&&(arg!="出去")) return 0;

	me=this_player();	
      message_vision(
"
$N看到一个哑仆走了过来，向$N打着手势，$N也不懂他到底是什么意思。
突然他转身向外走去，$N一下子明白了他是要带你出阵，赶紧跟了上去。

你跟随着这个哑仆在桃花树中穿来穿去，虽然$N很想记住路途，可几个
弯一打，$N是说什么都记不清路了。

你跟着哑仆走啊，走啊，路好象永远没有尽头。突然哑仆停下了脚步。
你定睛一看，已经到了桃花阵外。
好险啊！你花费了大半条命，终于出了桃花阵。

\n", me);

	me->move(__DIR__"wroad"); 

	i=me->query("max_kee");
	me->set("eff_kee", me->query("eff_kee")-(i/20)-random(i/5) ); 
	if(me->query("kee")>me->query("eff_kee")) 
		me->set("kee",me->query("eff_kee"));

	return 1;
}

void create()
{
      set("short", "阵口");
	set("long", @LONG
这里是桃花外阵的进阵处，一走进这里，眼前的景色就忽然一变，只
见周围都是枝杈相连的大树，一颗接着一颗，密密麻麻，压根就望不到
树林外的东西。在这四周包围的树林间，有八条小路向远处延伸出去。
LONG
	);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/jiading" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 8 */
          "east" : __DIR__"east",
          "west" : __DIR__"west",
  	    "north": __DIR__"north",
          "south": __DIR__"south",
          "northeast": __DIR__"nteast",
          "northwest": __DIR__"ntwest",
          "southeast": __DIR__"steast",
          "southwest": __DIR__"stwest",
	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

