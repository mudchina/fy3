// thd:road1.c
// 97.7.15 by Aug

inherit ROOM;

void create()
{
      set("short", "石板路");
	set("long", @LONG
这是条石板路，江湖上神秘莫测的桃花岛就在你的眼前了。石板路两
旁都种植着桃花树，无数彩蝶正在树影间飞舞。但当你向走近细看的时候
一切事物都好象笼罩在迷雾之中，不甚真切。西边不时有带着咸味的海风
吹来，再往西走就是桃花岛的码头了，而东面这条石板路将要深入到树阵
的深处。路的两旁是一片洁净的海滩。
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/shagu" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "east" : __DIR__"wroad",
          "west" : __DIR__"dukou_thd",
          "northeast" : __DIR__"nwbeach",
          "southeast" : __DIR__"swbeach",
	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

int valid_leave(object me, string dir)
{
  object ob;

  if((dir=="west")||(me->query_temp("win_shagu")==1)) return ::valid_leave(me, dir);  

  if((string)me->query("class")!="taohua")
  {	
	ob = present("shagu", this_object());
	if (objectp(ob))
//	if( objectp(ob) && ob->is_npc() )
      return notify_fail(
"傻姑双手一拦不让你过去，傻笑道：你又不是桃花弟子，到这儿来干吗？
还是和我玩玩吧，你嬴了我，我就让你过去。嘻嘻 \n");
  }

  return ::valid_leave(me, dir);    
}
