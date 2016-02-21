// Room: /d/suzhou/meizhuang/heibaiziju.c

inherit ROOM;

void create()
{
	set("short", "黑白子居");
	set("long", @LONG
只见好大一间房中，除了一张石几、两只软椅之外，空荡荡地一无所
有，石几上刻着纵横十九道棋路，对放着一盒黑子、一盒白子。这棋室中
除了几椅之外不设一物。当是免得对局时分心。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east":__DIR__"chuangongfang3",
]));
	set("objects",([
		__DIR__"npc/heibaizi":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
