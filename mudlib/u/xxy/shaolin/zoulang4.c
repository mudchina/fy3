/ Room: /d/shaolin/zoulang4.c
// Date: YZC 96/01/19

inherit ROOM;


string look_poem();


void create()
{
	set("short", "走廊");
	set("long", @LONG
这里是禅房走廊。房顶一侧支在南面的高墙上，另一侧则与
北边罗汉堂的屋顶相连。彩梁画栋，连顶棚也用彩漆绘满了各种
飞天的图形，每幅画似乎都在诉说一个娓娓动人的佛经故事。南
边墙上题着一首诗(poem)。往北通往罗汉堂。
LONG
	);

	set("exits", ([
		"west" : __DIR__"zoulang3",
		"north" : __DIR__"luohan1",
	]));

	set("item_desc",([
		"poem"		:	(: look_poem :),
	]));
	setup();
}


string look_poem()
{
	return
	"\n"
	"    ※※※※※※※※※※※※※※※※※※※※※※※※※※\n"
	"    ※※※※※※※　　　　　　　　　　　　※※※※※※※\n"
	"    ※※※※※※※　　　　舍利子，　　　　※※※※※※※\n"
	"    ※※※※※※※　　　　　　　　　　　　※※※※※※※\n"
	"    ※※※※※※※  色不异空，空不异色；　※※※※※※※\n"
	"    ※※※※※※※　　　　　　　　　　　　※※※※※※※\n"
	"    ※※※※※※※  色即是空，空即是色。　※※※※※※※\n"
	"    ※※※※※※※　　　　　　　　　　　　※※※※※※※\n"
	"    ※※※※※※※  受想行识，亦复如是。　※※※※※※※\n"
	"    ※※※※※※※　　　　　　　　　　　　※※※※※※※\n"
	"    ※※※※※※※　　　　舍利子，　　　　※※※※※※※\n"
	"    ※※※※※※※　　　　　　　　　　　　※※※※※※※\n"
	"    ※※※※※※※  是诸法相，不生不灭，　※※※※※※※\n"
	"    ※※※※※※※　　　　　　　　　　　　※※※※※※※\n"
	"    ※※※※※※※  不垢不净，不增不减。　※※※※※※※\n"
	"    ※※※※※※※　　　　　　　　　　　　※※※※※※※\n"
	"    ※※※※※※※※※※※※※※※※※※※※※※※※※※\n";
}

