// Room: /u/oldsix/room1/tingyu.c

inherit ROOM;

void create()
{
	set("short", "听雨居");
	set("long", @LONG
但见“听雨居”四面皆水，从窗中望出去，湖上烟波尽收眼底，回过头来，
见[1;32m桌子[2;37;0m上杯碟都是精致的细磁，你心中先喝了声采。
LONG
	);
	set("objects",([
		__DIR__"npc/woman" :1,
		]));
	set("item_desc",([
	"桌子" : "一张红木八仙桌(zhuozi)，看样子挺重的，似乎可以移动(yi)。\n",
	"zhuozi":"一张红木八仙桌，看样子挺重的，似乎可以移动(yi)。\n",
		]));
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"ru4",
]));
	set("no_clean_up", 0);
	set("chuilang_dest","/d/suzhou/canhe/canhe.c");
	set("where","窗外");
	setup();
}
void init()
{
	add_action("do_move","yi");
}
int do_move(string str)
{
	object me,npc;
	me=this_player();
	if(!str)	{
		write("你要移什么东西？\n");
		return 1;
			}
	if(str!="zhuozi"&&str!="桌子")   {
		write("没有这样东西。\n");
		return 1;
			}
	if(this_object()->query("exits/down"))	{
		message_vision("$N移动了下桌子，结果没什么反应。\n",me);
		return 1;
	}
	if(!present("a zhu",this_object()))	{
	        message_vision("$N使出了吃奶的劲，也没能把桌子移动分毫。\n"
        +"似乎这张桌子中暗藏着什么机关。\n",me);
    return 1;
	}
            message_vision("阿朱笑着对$N说道：我来帮你吧。\n"
                        +"说完，伸手在墙上不知什么地方按了一下。\n"
                        +"耳中只听见“卡卡”几声轻响，桌子已移到一边。\n",me);

    this_object()->set("exits/down","/d/suzhou/taihu/shuilu1.c");
    return 1;
}
int valid_leave(object me,string str)
{
	if(str=="down") {
	write("只听得“卡卡”几声轻响，桌子已回到原位。\n");
		this_object()->delete("exits/down");
			}
	return 1;
}
