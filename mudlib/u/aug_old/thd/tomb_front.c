// thd:tomb_front.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "冯夫人墓前");
	set("long", @LONG
在你眼前出现了一座坟墓。这座坟墓被桃花树包围着，不走近根本看
不清。你走近了才发现这座坟墓建筑的十分雄伟，坟包足有一人多高，上
面也没有一根杂草，可见是有人经常来修整。而墓碑也是用上等的大理石
制成。墓碑上写着几个字“桃花岛女岛主冯氏之墓”，字迹有些潦草。原
来这就是黄药师的爱妻冯夫人的坟墓，她死后黄药师痛不欲生，甚至欲追
随她而去，终因放不小幼女，才没有成行。于是他兴建了这座坟墓，据说
坟墓还中充满这珍宝和武馆秘辑。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "south" : __DIR__"in_road7",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

