// Room: /d/suzhou/lianwuchang.c

inherit ROOM;

void create()
{
	set("short", "练武场");
	set("long", @LONG
这儿就是金风庄弟子练功的广场。广场四周的兵器架上放置着各式练功用的
武器，不少青年弟子正在勤练武艺。东面的大房子是库房，西边通往厨房，南面
则是内室。
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"chufang",
  "south" : __DIR__"neishi",
  "north" : __DIR__"jinfengzhuang",
  "east" : __DIR__"kufang",
]));
	set("objects",([
		__DIR__"npc/dizi1":2,
		__DIR__"npc/dizi2":2,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
