// Room: /d/quanzhou/bixiao-stone.c

inherit ROOM;

void create()
{
	set("short", "碧霄岩");
	set("long", @LONG
碧霄岩是一块陡立的大岩石,一端紧靠山壁,而就在这山壁之上,不
知谁在此浮雕了三世尊佛像,石像上方的石壁上,有一个红色的'寿'字.
LONG
	);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"chaoan.c",
  "southeast" : __DIR__"chayuan",
  "northup" : __DIR__"yixiaot.c",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
