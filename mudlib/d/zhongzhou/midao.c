//midao.c

#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "密道");
        set("long", @LONG
        这是一个密道，密道很小，勉强可以两个通过，两旁的墙上点着油灯，也不知
这个密道可以通到哪里。

LONG
        );

       set("exits", ([
                 "northwest" : __DIR__"midao1",

       ]));

       setup();
}
void greeting(object ob)
	
       
{
	if( !ob || environment(ob) !=this_object()) return;
	if(ob->query_skill("dodge",1)<=40 || ob->query_skill("parry",1)<=100)
        {
		write(RED
"你只看见几道白光射向你的几大死穴，你就觉得胸口一麻，
很快你就什么都感觉不到了。\n"NOR);



		ob->die();

		return 1;
	}
		else
	{
		write(RED
"你只看见几道白光射向你的几大死穴,你连忙运起移行换位大法
飘向一旁躲开。不过也着实吓出一身冷汗来！\n"NOR);
	}
}

void init()
{
	object ob;
	ob=this_player();
	call_out("greeting",1,ob);
        add_action("do_la", "la");
	add_action("do_la", "拉");

}

int do_la(string arg)
{
	object me;
	me = this_player();

	if( !arg || arg=="" ) return 0;
	
	if( arg=="铁环"|| arg=="huan") 
	{
		tell_object(me,"你用力拉了一下铁环。\n");
		{
		message("vision", "过了一会儿，你只听到一阵轰隆隆的响声，出现了一道暗门。\n", me);
		set("exits/south", __DIR__"yanguan");
		remove_call_out("close");
		call_out("close", 10, this_object());
		}
		return 1;
	}
}

void close(object room)
{
	message("vision","一阵轰隆隆的响声过后，暗门又缓缓地关上了。\n", room);
	room->delete("exits/south");
}
