// baishulin2.c 柏树林


inherit ROOM;

void create()
{
	set("short", "柏树林");
	set("long", @LONG
	你走进了柏树林的深处，脚下踩着厚厚的落叶，松松软软。这里的
光线非常阴暗，你几乎什么都看不清了。突然一只松鼠从你眼前的树枝上猛
地跳了过去，吓了你一跳。
LONG
	);

	set("exits", ([
		"northup" : __DIR__"baishulin4",
		"west" : __DIR__"baishulin1",
	]));

set("outdoors","/d/quanzhen");
	setup();
	replace_program(ROOM);
}
