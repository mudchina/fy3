// Room: /u/yuki/emei/room/banshanyao.c

inherit ROOM;

void create()
{
	set("short", "半山腰");
	set("long", @LONG
这里是娥眉后山的半山腰，你可以在这里喘口气。路边
有一间小茅草屋，歪歪斜斜的似乎要倒了，看起来好长时间
都没有人住过了。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"xiaolu3",
  "west" : __DIR__"maowu.c",
]));

	setup();
	replace_program(ROOM);
}
