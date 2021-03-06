// Room: /d/huanggon/baohedian.c

inherit ROOM;

void create()
{
	set("short", "保和殿");
	set("long", @LONG
保和殿是个气派颇大,供接见宾客的殿堂.遇国家大典或新年佳节,皇
帝在此宴请外国使节和少数民族首领,殿试科员也就在此.北边是乾清门,
南边是中和殿.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/qiluonuofu.c" : 1,
  __DIR__"npc/huabosiji.c" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"zhonghedian",
  "north" : __DIR__"qianqinmen",
  "east" : __DIR__"shiweifang",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
