// Room: /d/heimuya/chengdedian.c

inherit ROOM;

void create()
{
	set("short", "成德殿");
	set("long", @LONG
这就是日月神教教主平日发号施令的地方，殿中无窗，殿口
点着明晃晃的蜡烛，大殿彼端高设一座，坐着一个英俊的中年人，
自是名震江湖的东方不败的姘头杨莲亭了！ 
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/yang" : 1,
  __DIR__"npc/dizi" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "down" : __DIR__"up4",
  "north" : __DIR__"huoting",
]));
	set("valid_startroom", 1);

	setup();
	replace_program(ROOM);
}
