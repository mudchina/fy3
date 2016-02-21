// Room: /d/heimuya/hua1.c

inherit ROOM;

void create()
{
	set("short", "花园");
	set("long", @LONG
这是一个极精致的小花园。园中，红梅绿竹，青松翠柏，布
置得颇具匠心，往西去是一片青草地。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/suzhou/npc/huajiang.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"grass2",
]));

	setup();
	replace_program(ROOM);
}
