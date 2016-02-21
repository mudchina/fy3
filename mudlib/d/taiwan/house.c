// Room: /d/taiwan/house.c

inherit ROOM;

void create()
{
	set("short", "渔夫的家");
	set("long", @LONG
一间很简陋的茅草房子.在朦胧的光线下,能看到依稀摆了张木桌.破 
烂的一扇木板门上还贴着张门神,看来十分狰狞. 
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"villege",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/fisherman.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
