// Room: /d/emei/liangong.c

inherit ROOM;

void create()
{
	set("short", "修炼室");
	set("long", @LONG
这间静室是老人精心设计的,石室底部四方,顶则成正圆,取天圆地
方之意,在石壁正中有一条裂缝环室一周,你仔细看了看,显然是有人用
指力划出的,在此处打坐不虑别人打扰.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhou.c" : 1,
]));
	set("no_clean_up", 0);
          set("no_fight", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"danshi",
]));
	set("no_magic", 1);

	setup();
	replace_program(ROOM);
}
