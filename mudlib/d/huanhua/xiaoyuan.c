// Room: /d/new/huanhua/xiaoyuan.c

inherit ROOM;

void create()
{
	set("short", "小院子");
	set("long", @LONG
院子很小,四面低矮的淡青色围墙把一园的春色围了起来.一条小径在花
木中弯弯曲曲地伸向一栋阁楼.东面的两扇院门旁一座高大的假山,看去
很有些惊人.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qiubo.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xiaolu3",
  "west" : __DIR__"path1",
]));

	setup();
	replace_program(ROOM);
}
