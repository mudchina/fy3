// Room: /d/yangzhou/gongyuan.c

inherit ROOM;
#include <localtime.h>
int now_time();
void create()
{
	set("short", "苏州贡院");
	set("long", @LONG
门前两株绿柳，圆拱门上两个红色大字分外引人注目[贡院]，里面传来一阵
朗朗读书声，这里也是考秀才的地方，一边的院墙上贴了张告示(gaoshi).
LONG
	);
	set("no_magic", 1);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhukao2.c" : 1,
]));
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "gaoshi" : "本处限考秀才
1.凡已考中秀才或以上功名者，不得入考。
2.读书写字未满30级者，不得入考。
3.非童生者不得入考,开考仅限于每月上半月。
4.使用[exam]请主考官出题，用[answer .....]回答问题。
5.回答问题限时5分钟.
6.若回答不对，请明天再来。
7.答题时间离开考场，作弃权论。
注意 回答的最后请勿加任何标点符号。
",
]));
	set("light_up", 1);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"chengxijie3",
]));
	set("no_fight", 1);
        set("no_steal",1);
        set("no_sleep",1);

	setup();
}
int valid_leave(object me, string dir)
{
  if (dir=="north"&&me->query_temp("xxy/answer")){
  tell_room(this_object(),me->query("name")+"摇摇头长叹一声：看来我还得多读两年!\n");
  me->delete_temp("xxy");
  me->set("xxy/last_check",now_time());
   }
        return ::valid_leave(me, dir);
}
int now_time()
{int i;
 object ob=this_player();
 mixed *local;
 local = localtime(time()*60);
 i=local[LT_MDAY] + (local[LT_HOUR]>23? 1 : 0);
 return i;
}
