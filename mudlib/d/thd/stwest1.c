// thd:stwest1.c
// 97.7.18 by Aug
#include <localtime.h>

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
      mapping gt;
 	int i;

      i=random(3);
      switch(i)
      {
          case 0:
            set("short", "沙漠");
	      set("long", @LONG
这里是一块沙漠，面积看上去不小，一眼都望不到边，时常可以看到
沙子被风吹起，在空中飞舞。
LONG
	      );
            break;
          case 1:
            set("short", "悬崖");
	      set("long", @LONG
这里是一处地势险峻的悬崖，四周都是陡峭的山壁，往远处看，丘壑
高低起伏，颇为壮观。
LONG
	      );
            break;
          case 2:
            set("short", "海滩");
	      set("long", @LONG
这里是一处海滩，海浪不时地涌上又退下，面对着那蔚蓝蔚蓝的大海
令人不由地想坐下来静静地欣赏欣赏这怡人的景色。
LONG
	      );
            break;
      }

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/jiading" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      gt = NATURE_D->game_time(1);
      if((gt[LT_HOUR] <2 )||(gt[LT_HOUR] >=23)) 
      {
	  set("exits", ([ /* sizeof() == 8 */
		"east" : __DIR__"east1",
		"west" : __DIR__"west1",
		"north": __DIR__"north1",
		"south": __DIR__"south1",
       	"northeast": __DIR__"nteast1",
            "northwest": __DIR__"ntwest1",
            "southeast": __DIR__"steast1",
            "southwest": __DIR__"sjt",
	  ]));
      }
      else
      {
	  set("exits", ([ /* sizeof() == 8 */
		"east" : __DIR__"east1",
		"west" : __DIR__"west1",
		"north": __DIR__"north1",
		"south": __DIR__"south1",
       	"northeast": __DIR__"nteast1",
            "northwest": __DIR__"ntwest1",
            "southeast": __DIR__"steast1",
            "southwest": __DIR__"stwest1",
	  ]));
      }

	
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}
