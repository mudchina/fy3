// Room: /d/kaifeng/yushi2.c

inherit ROOM;

void create()
{
	set("short", "小浴室");
	set("long", @LONG
这些小浴室经过专门装修，而且有专人伺候打扫，所以很干净，墙
角落中还供奉着鲜花，梁柱上供奉着小佛像。房间正中当然是浴盆，有
些人为示对佛诚心，拜佛之前定要沐浴更衣的。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/zaopeng.c" : 1,
]));
	set("no_fight", 1);
	set("no_clean_up", 0);
	set("bath_room", 1);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"yushi",
]));    set("bath_equipment","木澡盆");

	setup();
	replace_program(ROOM);
}
