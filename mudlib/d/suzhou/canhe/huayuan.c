// Room: /d/suzhou/canhe/huayuan.c

inherit ROOM;

void create()
{
	set("short", "花园");
	set("long", @LONG
只见园内杂草丛生，显是此园荒废以久。你的心头禁不住涌起淡淡的哀愁，
感叹英雄暮日。南面的杂草遮盖之下隐隐可见一条小路。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"north" :__DIR__"miru3",
		"south" :__DIR__"mudi",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
