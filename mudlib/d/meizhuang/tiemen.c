// Room: /d/suzhou/meizhuang/tiemen.c
inherit ROOM;
#include <ansi.h>
void create()
{
	set("short", "铁门");
	set("long", @LONG
眼前是座铁门，门上锈迹斑斑，已猜不出有多少个年头了。铁门上有
个尺许见方的洞孔，借助墙上微弱的灯光，也许可以看见里面的情形。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"midao9",
]));
	set("no_clean_up", 0);
	set("item_desc",([
		"洞孔":	"里面黑乎乎的看不清什么，不知能否钻（zuan）进去。\n",
		"dongkong":"里面黑乎乎的看不清什么，不知能否钻（zuan）进去。\n",
]));
	setup();
}
void init()
{
	add_action("do_zuan","zuan");
}
int do_zuan()
{
	object me,room,*inv;
	me=this_player();
	if(!room=find_object(__DIR__"heilao"))
		room=load_object(__DIR__"heilao");
	if(me->query_encumbrance()>5000)	{
		return notify_fail("你身上带的东西太多了，根本钻不进去！\n");
	}
	inv=all_inventory(room);
	if(sizeof(inv)>0)
		return notify_fail("里面空间太小了，没法钻进去！\n");
	message_vision(CYN"$N身形微缩，从铁门洞孔中钻了进去。\n"NOR,me);
	me->move(__DIR__"heilao");
	return 1;
}

