// Room: /d/kaifeng/yuwang.c

inherit ROOM;

void create()
{
	set("short", "禹王台");
	set("long", @LONG
禹王台建造于小山丘之上，这里风景优美，环境幽雅，自古以来就
是人们游春登高的胜地。相传春秋时期，晋国盲人乐师旷常在此吹奏
古乐，故名『吹台』。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/woman.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"shulin",
  "eastup" : __DIR__"yuwangmiao",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
