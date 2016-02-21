// Room: /d/kaifeng/dadao2.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
一条斜斜的小路，向西去不远有片树林，看上去黑呼呼的，自从不
久前树林中出了野猪伤人后，这条道就少人走。只有贪图路近的人还走
这条道。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"yezhulin",
  "northeast" : __DIR__"dadao1",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
