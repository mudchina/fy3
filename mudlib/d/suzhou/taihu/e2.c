// Room: /u/oldsix/room1/taihu_1.c

inherit ROOM;

void create()
{
	set("short", "太湖");
	set("long", @LONG
极目远眺，只见烟波浩渺，远水接天，望不到头。四周白茫茫的一片，你
不知到底该往哪划
LONG
	);
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
}
void init()
{
	object me;
	me=this_player();
	remove_call_out("greeting");
	call_out("greeting",1,me);
	add_action("do_hua","hua");
}
void greeting(object me)
{
	if(!me||environment(me) !=this_object()) return;
	message_vision("$N划着小船过来了。\n",me);
}
int do_hua(string str)
{
	object me;
	me=this_player();
	if(!str) 	{
		write("你要往哪划？\n");
		return 1;
			}
	if(str=="n"||str=="north"||str=="s"||str=="south")	{
		me->move(__DIR__"shuilu2");
		return 1;
					}
	if(str=="w"||str=="west")	{
		me->move(__DIR__"e1");
		return 1;
				}
	if(str=="e"||str=="east")	{
		me->move(__DIR__"e3");
		return 1;
					}
	write("没有这个方向。\n");
	return 1;
}
