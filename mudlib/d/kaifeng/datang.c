// Room: /d/kaifeng/datang.c

inherit ROOM;

void create()
{
	set("short", "开封府大堂");
	set("long", @LONG
两排的衙役站立两边，再旁边是龙头，虎头，狗头三把铡刀，白亮的
锋刃令人寒毛直竖。台桌后高挂『明镜高悬』的匾额。上了大堂，无事也
胆寒，东面出去就是街道。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
//	__DIR__"npc/bao.c" : 1,
]));
set("no_steal",1);
set("no_fight",1);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"kaifeng",
]));

	setup();
	replace_program(ROOM);
}
