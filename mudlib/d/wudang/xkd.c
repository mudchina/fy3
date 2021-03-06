// Room: /u/nangong/xkd/xkshi.c

inherit ROOM;

void create()
{
        set("short", "石室");
	set("long", @LONG
vv    这里是侠客岛上最大的一间石室,平时侠客岛的两位岛主就在这里静坐,
好象是在参悟什么武学难题.(wall)
LONG
	);
  set("item_desc", ([ /* sizeof() == 1 */
              "wall":
"                   赵客缦胡缨，吴钩霜雪明。银鞍照白马，飒沓如流星。
                    闲过信陵饮，脱剑膝前横。将炙啖朱亥，持觞劝侯嬴。
                    三杯吐然诺，五岳倒为轻。眼花耳热后，意气素霓生。
                    救赵挥金锤，邯郸先震惊。千秋二壮士，（火亘）赫大梁城。
                    纵死侠骨香，不惭世上英。谁能书阁下，白首太玄经？
",]));
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"midao2",
]));
	set("no_clean_up", 0);

	setup();
}
void init()
{
         add_action("do_study", "yanxi");
         add_action("do_study", "study");
         add_action("do_study", "watch");
}

int do_study(string arg)
{
         mapping fam;
         object me = this_player();

         if ( !living(me) ) return 0;

         if (!(fam = me->query("family")) || fam["family_name"] != "侠客岛")
                  return notify_fail("你不是侠客岛弟子，如何能领悟侠客岛武功？\n");

         if ((int)me->query_skill("literate", 1) > 1)
                  return notify_fail("你看了半天,没看出什么名堂? \n");
         if ((int)me->query("kar") < 28)
                  return notify_fail("你看了半天,没看出什么名堂? \n");
         if ((int)me->query("int",1) > 18)
                  return notify_fail("你看了半天,没看出什么名堂? \n");

         if ( arg =="wall" )  {
                  message_vision("$N对着石壁的文字出了神。\n", me);

                  if ((int)me->query_skill("force", 1) > 250)
                           return notify_fail("石壁所述尽在你心,你无法再悟出什么新东西。\n");

                  if ((int)me->query("gin") < 20 || (int)me->query("kee") < 50 )
                           return notify_fail("你觉得好累,好想睡觉。\n");

                  write("你静心研习石壁的秘籍，对内功心法有些领悟。\n");
                  me->receive_damage("gin", 10+random(5));
                  me->receive_damage("kee", 20+random(10));
me->improve_skill("xiake-shengong", 30 + random((int)me->query("int")));
                  return 1;
         }
/*
         if ( arg =="ground" ) {
                  message_vision("$N开始垂头审视地上的图形。\n", me);

                  if ((int)me->query_skill("parry", 1) > 250)
                           return notify_fail("你对着地上研习一会，只觉所述早已尽藏心胸。\n");

                  if ((int)me->query("gin") < 30)
                           return notify_fail("你一阵晕旋,想是用脑过度,该休息一会了。\n");

                  write("你模仿壁上的图形上跳下纵,修习招架闪躲。\n");
                  me->receive_damage("kee", 10+random(10));
                  me->receive_damage("gin", 10+random(10));
                  me->improve_skill("parry", (int)(me->query_int()/4) +
                                                          (int)(me->query_skill("parry", 1)/5) );
                  return 1;
         }
*/
        if ( arg =="top" ) {
                  message_vision("$N仰视壁上图形。\n", me);
/*
                  if ((int)me->query_skill("force", 1) < 30) {
                            message_vision("$N看着图形开始气血上涌, 目光直勾勾,竟然发起呆来. \n", me);
                            write("你定力不够,这样的图画还是少看为妙. \n");
                            message_vision("$N忽然摇晃起来,蓦地喷出口鲜血. \n", me);
                            me->receive_wound("kee", 30);
                            me->unconcious();
                            return 1;
                    }
*/
                  if ((int)me->query_skill("dodge", 1) < 30 )
                            return notify_fail("你的基本轻功火侯不够，无法从这些图形中领悟出什么来。\n");

                  if ((int)me->query_skill("xk-bufa", 1) > 250)
                            return notify_fail("你已学会了侠客身法身法,要更上一步,只能靠自己勤加练习。\n");

                  if ((int)me->query_skill("xk-bufa", 1) > (int)me->query_skill("dodge", 1) )
                            return notify_fail("你对侠客身法的领悟已达到了你的基本轻功火侯极限。\n");

                  if ((int)me->query("gin") < 20 || (int)me->query("kee") < 50 )
                           return notify_fail("你觉得好累,好想睡觉。\n");

                  write("你静心研习石壁上的图形，领悟到侠客岛轻功身法的精髓所在,顿时茅塞顿开。\n");
                  me->receive_damage("kee", 20 + random(10));
                  me->receive_damage("gin", 10 + random(5));
                  me->improve_skill("xk-bufa", 20 + random((int)me->query("int")/2) + 
random((int)me->query_skill("dodge", 1) / 5));
//                write(RED"恭喜阁下学会侠客步法. \n"NOR);
                  return 1;
         }

         return 0;
}

