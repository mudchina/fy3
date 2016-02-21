// Room: /d/new/tianxia/danger1.c

inherit ROOM;

void create()
{
	set("short", "石窟甬道");
	set("long", @LONG
这条通道曲折环绕.窄狭处仅能侧身而过,宽敞处可容十马并驾.似乎天
然生成,然而两壁连绵不断的各类石雕却告诉你,有人来过.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"room1",
  "northup" : __DIR__"incave5",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
