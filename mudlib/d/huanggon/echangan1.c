// Room: /d/huanggon/echangan1.c

inherit ROOM;

void create()
{
	set("short", "东长安街");
	set("long", @LONG
长安街东西走向,是京师繁华之地,道上行人,商贩,游客,艺人来往不
绝,街道的南边是家钱庄,里边传出一阵劈里啪啦打算盘的声音.东面是朝
阳门,出此门向北可到燕京长白等地.
LONG
	);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"chaoyang",
  "east" : __DIR__"chaoyangmen",
  "west" : __DIR__"echangan",
  "south" : __DIR__"qianzhua",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
