inherit ROOM;

void create()
{
	set("short", "地下秘室");
	set("long", @LONG
这是一间什麽也没有的空房间。
LONG
	);
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
