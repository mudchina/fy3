// Room: /d/suzhou/baigongti.c

inherit ROOM;

void create()
{
	set("short", "白公堤");
	set("long", @LONG
但见堤岸两旁“桃李莲荷数千枝”，把这一带点缀的秀丽异常。相传唐代大
诗人白居易在苏州任太守期间，为兴农田水利便商贾交通特在此处兴建了长堤。
“银勒牵骄马，花船载丽人”使百姓受益非浅，后人为纪念他便称此堤为“白公
堤”。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
		"west" :__DIR__"huan",
		"east" :__DIR__"jiaowai",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
