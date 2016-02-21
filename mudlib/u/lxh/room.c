
#include <ansi.h>
inherit ROOM;

int fix_cmd(object me, string arg);
void create ()
{
      set ("short", HIC+BLINK+CLR"寻欢大厅"NOR);
      set ("long", 
      
"\n"REV"***********************************************************\n"NOR""
"汝爱我心 我怜汝色 以是因缘 经百千劫 常在缠缚 \n"
"                                               ---楞严经卷九\n"
"***********************************************************\n"
"只因众法合成此身  起唯法之起  灭唯法之灭\n"
"                                               --- 维摩经。问疾品\n"
"***********************************************************\n"
"室罗城中,演若达多,忽於晨朝,以镜照面,爱镜中头\n"
"                                               --- 楞严经\n"
"***********************************************************\n"
"身乾如薪  镇□如火  未能烧他  自焦其身\n"
"                                               --- 大庄严经论\n"
"***********************************************************\n\n"NOR""

);

  set("exits", ([ /* sizeof() == 4 */
/*  
      "fy"  :           __DIR__"fy", 
      "xyj" :   	__DIR__"xyj",
      "xkx ": 		__DIR__"xkx",
      "west": 		__DIR__"combatd",
*/      
]));
  set("objects", ([ /* sizeof() == 2 */
]));
//  set("no_fight", 1);
//  set("no_magic", 1);
  set("resource", ([ /* sizeof() == 1 */
  "water" : 1,
]));
  set("valid_startroom", 1);
  setup();
//  call_other("/obj/board/nancheng_b", "???");
}

void init()
{
	add_action("fix_cmd","fix");
}

int fix_cmd(object me, string arg)
{
	me=this_player();
	
        if (me->query("id")=="swordman") {
                          me->set("env/msg_min",HIY"天边一道闪过一道金光，$N骑着一把破扫帚歪歪斜斜的飞了过来！\n只听“哎呀”一声惨叫，$N从破扫帚摔了下来.\n"NOR);  
		        me->set("env/msg_mout",HIW"$N一见情况不对，急急忙忙爬上破扫帚飞走了。。。、\n"NOR);
		        me->set("env/msg_clone",HIM"$N悄悄的从怀里摸出来一个闪闪发光的小魔杖在手中挥舞着,\n然后凌空画了一个光圈，只见"NOR"$n"HIM"从光圈里面掉了下来!"NOR);
		        write("ok!\n");
		        return 1;
		        }
}
