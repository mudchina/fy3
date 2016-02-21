//yanguan.c

inherit ROOM;

void create()
{
        set("short", "鸦片馆");
        set("long", @LONG
一下楼梯走进一个大厅，原来这里是一个鸦片馆。大厅一溜放着大约
有几十张躺椅，几个烟鬼躺在躺椅上，旁边有小姐帮他做鸦泡。三面靠墙
都放着躺椅，唯独北面的墙边空荡荡的没什么东西。
LONG
        );

       set("exits", ([
                "up" : __DIR__"chalou",
                "east" : __DIR__"danjian",

       ]));
 set("item_desc", ([
		"墙" :
"墙的左下角有个铁环，似乎可以拉的动。\n" ,
		"北墙" :
"墙的左下角有个铁环，似乎可以拉的动。\n" ,
]));

       setup();
}

void init()
{
        add_action("do_la", "la");
	add_action("do_la", "拉");

}

int do_la(string arg)
{
	object me;
	me = this_player();

	if(!arg && arg="")
return notify_fail("你要拉什么？\n");
	if(arg !="huan" && arg!="铁环")
return notify_fail("你想干什么？看清楚再说！\n");
	
	if(me->query_str()<=80)
return notify_fail("你力气太小啦！\n");
		tell_object(me,"你用力拉了一下铁环。\n");
		{
		message("vision", "过了一会儿，你只听到一阵轰隆隆的响声，出现了一道暗门。\n", me);
		set("exits/north", __DIR__"midao");
		remove_call_out("close");
		call_out("close", 10, this_object());
		}
		return 1;

}

void close(object room)
{
	message("vision","一阵轰隆隆的响声过后，暗门又缓缓地关上了。\n", room);
	room->delete("exits/north");
}
