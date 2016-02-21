// Room: /d/sandboy/shandao5.c

inherit ROOM;

void create()
{
	set("short", "一线谷");
	set("long", @LONG
这是一条很险恶的山谷，两侧崖壁之间的距离，最远的也不过是四五尺， 
狭 窄处，只勉强可山一个人通过.崖壁上光滑如镜，寸草不生。石壁的颜色， 
都是紫黑的颜色，看起来，有一种阴森的感觉。  
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"shandao4",
  "north" : __DIR__"shandao6",
]));
	set("outdoors", "/d/sandboy");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
