// Room: /d/kaifeng/sanqing.c

inherit ROOM;

void create()
{
	set("short", "三清殿");
	set("long", @LONG
三清殿供奉的是三清神像，不过开封府内的居民大多到大相国寺去烧
香还愿了，这里的香火并不旺。神像也蓬头垢面，无人理会。西行去有座
高高的阁楼，就是玉皇阁。
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/obj/sanqingxiang.c" : 1,
  __DIR__"npc/xianghuo.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"yanqing",
  "west" : __DIR__"yuhuang",
]));

	setup();
	replace_program(ROOM);
}
