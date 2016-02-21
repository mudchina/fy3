// Room: /d/kaifeng/road4.c

inherit ROOM;

void create()
{
	set("short", "州桥");
	set("long", @LONG
这座高高的桥如同彩虹初降人间，三十六道石阶直通桥面，桥下就
是水流奔涌的大运河。桥上人来如梭，河中巨舟横过。在桥下看去，人
行于高波之上，令人心颤不已。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"road3",
  "northdown" : __DIR__"road5",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
