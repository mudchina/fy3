// Room: /d/suzhou/tuoman/hualin1.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "花林");
	set("long", @LONG
你在花林中信步而行，所留神的只是茶花，忘了记忆路径，眼见小路东一
条、西一条，不知那一条才是来路，要回到小船停泊处却有点儿难了。
LONG
	);
	set("outdoors","suzhou");
	setup();
}
void reset()
{
	::reset();
	set("exits",([
		"north" :__DIR__"hualin"+(random(6)+1),
		"south" :__DIR__"hualin"+(random(6)+1),
		"west"  :__DIR__"hualin"+(random(6)+1),
		"east"  :__DIR__"hua2",
	]));
}
int valid_leave(object me,string dir)
{
	write("你已走得头昏眼花，分不清东南西北了。\n");
	return 1;
}
void init()
{
	object ob;
	ob=this_player();
	remove_call_out("greeting");
                call_out("greeting", 1, ob);
}
void greeting(object ob)
{
	if(!ob||environment(ob)!=this_object()) return;
	write(HIC"你突然发现东面似乎有条小路！\n"NOR);
	return;
}
