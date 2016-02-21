// Room: /d/suzhou/qianzhuang.c

inherit ROOM;

void create()
{
	set("short","姚记钱庄");
	set("long", @LONG
钱庄内静悄悄的，各人都在小心警慎的干着自己的事。虽然苏州的治安良好，
但你还是紧紧的拽住自己的钱袋，生怕它会飞走似的。钱庄老板正聚精会神的打
着算盘，并没有注意到你走进来。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"chengnanjie2",
]));
set("no_fight",1);
	set("objects",([
		__DIR__"npc/yaolaoban":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
