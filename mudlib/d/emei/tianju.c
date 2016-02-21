// Room: /d/emei/tianju.c

inherit ROOM;

void create()
{
	set("short", "天心居");
	set("long", @LONG
这是九老中天心的居处,天心老人心喜清静,所以在这地方特地辟
了个石室,常年在此闭关修炼,室中云烟缭绕,细看下,是从壁间一个小
洞窟中涌出的,据说是当年九老费尽心力,而引来的九天雾霭.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"danshi.c",
  "south" : __DIR__"pubuding.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/su.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
