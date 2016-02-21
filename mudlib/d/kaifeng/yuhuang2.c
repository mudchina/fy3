// Room: /d/kaifeng/yuhuang2.c

inherit ROOM;

void create()
{
	set("short", "玉皇阁二层");
	set("long", @LONG
阁楼中打扫得还算干净，看来道士们对于三清虽然不大在意，对玉皇
还是挺尊重的。此地供奉的是尊汉白玉雕玉皇大帝像，纹理细腻，推开窗
栏，还能看到繁华的开封街景。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/yudixiang.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"yuhuang",
]));

	setup();
	replace_program(ROOM);
}
