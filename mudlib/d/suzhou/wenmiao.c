// Room: /d/suzhou/wenmiao.c

inherit ROOM;

void create()
{
	set("short", "文庙");
	set("long", @LONG
正对面是块草坪，四周种着绿树。草坪正中的坛中一棵青松直入云宵。两条长
环绕在草地周围。长廊壁上立有不少名家学者大作的石碑。众多苏州学子聚于此处，
或高谈阔论、或观壁苦思。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"chengnanjie4",
]));
	set("objects",([
	__DIR__"npc/shusheng" :2,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
