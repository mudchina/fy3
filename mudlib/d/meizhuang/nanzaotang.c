// Room: /d/suzhou/meizhuang/nanzaotang.c

inherit ROOM;

void create()
{
	set("short", "男澡堂");
	set("long", @LONG
澡堂不是很大，乱哄哄的放着几个大木桶。练了一天的功夫，经验虽
没长多少可却已累的精疲气竭，在这儿泡上一会可真是舒服啊。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"zaotangguodao",
]));
	set("no_clean_up", 0);
	set("bath_room",1);
	set("bath_equipment","大木桶");
	setup();
	replace_program(ROOM);
}
