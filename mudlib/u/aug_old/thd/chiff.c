// thd:chiff.c
#include <localtime.h>
#include <ansi.h>

inherit ROOM;

void create()
{
      set("short", "忘情崖");
	set("long", @LONG
这里就是忘情崖。从这里望去，下面就是汹涌的波涛，就是丛生的乱
石。只要从这里跳下去，世见的一切烦恼就都不能再困扰你。但是情呢？
你跳下去了就能忘记这个“情”字吗？不能，情是永远忘却不了的，不管
是生是死，是神是鬼，只有一个情字是与天地永存的。所有这里虽名为“
忘情”确从没有人在这里真正忘了情，了了缘。当年黄药师爱妻新丧之时
就欲在此了却残生，但终应幼女而没能成行。哎，问世间情为何物，只教
人生死相许……
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "southeast" : __DIR__"hill7",
	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

void init()
{
	add_action("do_jump", "jump");
	add_action("do_jump2", "跳崖");
}

int do_jump(string arg)
{
	object me;
	mapping gt;

	if(arg!="down") return 0;

	me=this_player();

	message_vision(
"$N向下看看大海，又回头看了看，好象在回味着什么。
终于$N长叹一声：别了，亲爱的！ 纵身跳了下去。
唉，可怜一个大好青年又为了一个“情”字而丧失了性命。

\n",me);

	if(me->query_skill("dodge")<20)
	{
		write(
"你在急速下落中，只看到大海越来越近，越来越近……
终于，你落到了大海中，巨大的压力把不压的很难受。
还好很快你就什么都感觉不到了。\n");

		me->move(__DIR__"in_sea");

		me->die();

		return 1;
	}

	gt = NATURE_D->game_time(1);
if((gt[LT_HOUR] <=6 )||(gt[LT_HOUR] >=20))
  	{
		write(
"你在急速下落中，只看到大海越来越近，越来越近……
你不知怎么又怀念起生的快乐了，后悔如此的轻生，可又有什么办法呢？\n");

		write(
RED"
突然，你模模糊糊的看到一棵长在悬崖峭壁上的松树，你忙伸手去抓，
可天太黑了，你没有能抓住松树，你继续向下落去，你的最后希望破灭了。\n"NOR);

		me->move(__DIR__"in_sea");

		write("
终于，你落到了大海中，巨大的压力把你压的很难受。
还好很快你就什么都感觉不到了。\n");

		me->die();		
		return 1;		
	}
	else
	{
		write(
"你在急速下落中，只看到大海越来越近，越来越近……
你不知怎么又怀念起生的快乐了，后悔如此的轻生，可又有什么办法呢？

突然，你借着阳光看到一棵长在悬崖峭壁上的松树，你忙伸手去抓。
啊你抓住了。你奋力爬上松树。

\n");

		me->move(__DIR__"songshu");
		return 1;		
	}
}

int do_jump2(string arg)
{
	do_jump("down");

	return 1;
}


