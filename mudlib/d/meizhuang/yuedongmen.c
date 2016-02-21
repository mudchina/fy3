// Room: /d/suzhou/meizhuang/yuemendong.c

inherit ROOM;

void create()
{
	set("short", "月洞门");
	set("long", @LONG
月洞门门额上写着“琴心”两字，以蓝色琉璃砌成，笔致苍劲，当是
出于秃笔翁的手笔了。北面是条花径，南面通向回廊。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north":__DIR__"huajing",
  "south" : __DIR__"heilang6",
]));
	set("objects",([
		__DIR__"npc/huyuan":2,
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
