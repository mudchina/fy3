// Room: /d/huanggon/houtang1.c

inherit ROOM;

void create()
{
	set("short", "香堂");
	set("long", @LONG
后堂设立成香堂的模样,是天地会帮众入会的手续.一张板桌上供着
两个灵牌,中间一个写着'大明天子之位',侧边一个写着'大明延平郡王招
讨大将军郑之位',板桌上供着一个猪头,一个羊头,一只鸡,一尾鱼,插着七
支香,前边是张白纸.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/yunlong/chen.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"dating",
]));

	setup();
	replace_program(ROOM);
}
