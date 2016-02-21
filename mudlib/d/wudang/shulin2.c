// Room: /d/wudang/shulin2.c

inherit ROOM;

void create()
{
	set("short", "树林");
	set("long", @LONG
这儿的树木长得十分高大，遮天敝日。阴暗的四周给人阵阵阴气，虽然靠
近武当山，但土匪在这儿还是十分嚣张。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"shilu1",
  "west" : __DIR__"shulin1",
]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
