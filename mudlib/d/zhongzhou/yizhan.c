// Room: /d/zhongzhou/yizhan.c

inherit ROOM;

void create()
{
	set("short", "驿站");
	set("long", @LONG
这里是中州城的驿站，这个驿站不大，几个邮差正忙着整理信件。你
如果有信或想寄信给谁的话可以来这里看看。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/yangzhou/npc/youchai.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wendingnan4",
]));

	setup();
	replace_program(ROOM);
}
