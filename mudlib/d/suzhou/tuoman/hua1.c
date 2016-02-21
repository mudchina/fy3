// Room: /d/suzhou/tuoman/hualin.c

inherit ROOM;

void create()
{
	set("short", "花林");
	set("long", @LONG
你信步观赏，只见花林中除山茶外更无别样花卉，连最常见的牵牛花、月
月红、蔷薇之类也是一朵都无。但所植山茶却平平无奇，唯一好处只是得了个
“多”字。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south":__DIR__"tuoman",
		"north":__DIR__"hua2",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
