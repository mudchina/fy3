// Room: /d/zhongzhou/chalou.c

inherit ROOM;

void create()
{
	set("short", "大观园茶楼");
	set("long", @LONG
这里是一间茶楼，虽说是一家不小的茶楼，可店里却没几个人。里面
好象有个楼梯往下，微微从下面透出的味道让人闻了头有点发昏。
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "up" : __DIR__"meigui.c",
  "east" : __DIR__"wendingnan2",
  "down" : __DIR__"yanguan",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
