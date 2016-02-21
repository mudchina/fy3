// Room: /d/quanzhou/cangjinge.c

inherit ROOM;

void create()
{
	set("short", "藏经阁");
	set("long", @LONG
藏经阁中一排排的经柜看得人头晕,听说在此阁的数十万册经书中, 
还有一些是佛门的上乘武功密籍. 
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "eastdown" : __DIR__"jietai",
]));
	set("objects", ([ /* sizeof() == 2 */
  "/d/hainan/obj/swordbook.c" : 1,
  "/d/hainan/obj/dodgebook.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
