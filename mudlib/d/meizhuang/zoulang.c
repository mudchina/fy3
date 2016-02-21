// Room: /d/suzhou/meizhuang/zoulang1.c

inherit ROOM;

void create()
{
	set("short", "走廊");
	set("long", @LONG
一条四周梅树环绕的走廊。头顶上是由琉璃青瓦铺盖而成的廊檐，可
遮风蔽雨。两侧梅树随风轻摆，不时送来阵阵清香。东面有个月门。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":__DIR__"yuemen",
  "west" : __DIR__"heilang4",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
