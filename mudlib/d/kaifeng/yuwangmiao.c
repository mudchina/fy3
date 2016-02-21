// Room: /d/kaifeng/yuwangmiao.c

inherit ROOM;

void create()
{
	set("short", "禹王庙");
	set("long", @LONG
禹王庙为追念大禹治水功德，在吹台上建造，庙内的大禹神像端身
平坐，一手握着把铁锹，目注远方，来人多是祈求莫发大水的，西下
过去就是片树林。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/dayu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "westdown" : __DIR__"yuwang",
]));

	setup();
	replace_program(ROOM);
}
