// Room: /d/suzhou/meizhuang/liangongchang.c

inherit ROOM;

void create()
{
	set("short", "练功场");
	set("long", @LONG
好大的一个广场。四周青梅环抱，满场上都是淡淡清香。地上铺的青
石板坑坑洼洼，留有不少脚印及兵器撞击后的痕迹。几个梅庄弟子散于各
处正埋头苦练。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"shibanlu3",
]));
	set("objects",([
		__DIR__"npc/nandizi"+(random(4)+1):1,
		__DIR__"npc/nandizi"+(random(4)+1):1,
		__DIR__"npc/nudizi"+(random(4)+1):1,
		 __DIR__"npc/nudizi"+(random(4)+1):1,
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
