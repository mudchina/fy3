// Room: /d/tianxia/1guan3.c

inherit ROOM;

void create()
{
	set("short", "三分教场");
	set("long", @LONG
这片空阔的场地位于山谷的中央,占地数十亩.却并不见人来往.南
面是迎宾馆.东面是帮众住所.北面山脚下一条石阶直通山顶.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"1guan2",
  "south" : __DIR__"1guan5",
  "east" : __DIR__"1guan6",
  "north" : __DIR__"jiaochang",
]));

	setup();
	replace_program(ROOM);
}
