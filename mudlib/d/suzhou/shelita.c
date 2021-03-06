// Room: /d/suzhou/gongdeta.c

inherit ROOM;

void create()
{
	set("short","舍利塔");
	set("long", @LONG
此塔与功德塔东西对峙，规模、形式完全相同。塔檐用砖叠起共挑出六层，
平砖与菱角牙子相间。塔檐弧线明显，至角起翘。塔檐上面的平座，亦是用砖叠
砌而成。其外观如同木塔，造型玲珑秀丽。是江南一带典型的宋塔建筑。你不由
得抬头看了看塔顶的铁刹。
LONG
	);
	set("item_desc",([
		"铁刹"  :"你心想该怎么上去呢？\n",
		"tiesha":"你心想该怎么上去呢？\n",
	]));
	set("objects" ,([
		__DIR__"npc/hutaseng" :1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"gongdeta",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
}
void init()
{
        add_action("do_jump","jump");
}
int do_jump()
{
        object me;
        me=this_player();
	if(living(me)==0)	return 0;
	if(me->query_skill("dodge",1)<10)	{
                tell_object(me,"你的基本轻功还没练到家吧。\n");
                return 1;
        }
        message_vision("只见$N一个“旱地拔葱”，飞身直窜塔顶。\n",me);
		tell_room("/d/suzhou/shelitading",me->query("name")+"从塔下跃了上来。\n
");
		me->move("/d/suzhou/shelitading");
	me->start_busy(3);
        return 1;
}
