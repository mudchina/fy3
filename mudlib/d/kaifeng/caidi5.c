// Room: /d/kaifeng/caidi5.c

inherit ROOM;

void create()
{
	set("short", "菜地");
	set("long", @LONG
这片菜园子几畦地里种了一些时鲜蔬菜。另外有几个木桩搭起的菜
架子，供一些爬藤的蔬菜生长，南边是在空地上搭起来的一间小茅房。
北边有个角门出去。东面是片空地。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"caidi",
  "east" : __DIR__"kongdi",
  "south" : __DIR__"maofang",
  "north" : __DIR__"jiaomen",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
