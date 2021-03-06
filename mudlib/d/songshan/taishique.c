// Room: /d/songshan/taishique.c
// Date: CSWORD 96/03/25

inherit ROOM;

void create ()
{
  set ("short", "太室阙");
  set ("long", @LONG
嵩山古称方外，又称崇山，为五岳中的中岳，由太室少室二山沿
绵而成。汉武帝时称 "嵩高" ，取自诗经 "嵩岳维高，峻极于天" ，
道教以之为第六小洞天。阕高丈余，南面刻 "中岳太室阳城" 六字，
篆文古朴，苍劲有力。向西就是去少室山少林寺的路。向北一里许便
是中岳庙了。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yao" : 1,
]));
  set("outdoors", "songshan");
  set("exits", ([ /* sizeof() == 1 */
  "south":"/d/kaifeng/shanlu2",
  "north" : __DIR__"tianzhongge",
]));

  setup();
}

int valid_leave(object me,string dir)
{
	string family;
	object ob;

	family=(string)me->query("family/family_name");
	ob=present("yao hou",this_object());
	if(family &&family!="嵩山派"&& (int)me->query("combat_exp")>=10000
	&& objectp(ob) && dir=="north")
	return notify_fail("乐厚喝道：嵩山禁地，闲杂人等不得入内！\n");
	return ::valid_leave(me,dir);
}

