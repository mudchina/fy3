// Room: /u/swordman/yangzhou/zzroad2.c

inherit ROOM;

void create()
{
	set("short", "渡口路");
	set("long", @LONG
这里是通往去中州城的渡口，前面就是滚滚长江，向北就是扬州城。
LONG
	);
	set("light_up", 1);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"zzroad1",
  "south" : __DIR__"dukou",
]));
	set("outdoors", "/u/swordman");

	setup();
	replace_program(ROOM);
}
