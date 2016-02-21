// Room: /d/huanggon/neitang.c

inherit ROOM;

void create()
{
	set("short", "内堂");
	set("long", @LONG
这所大宅子是云南沐王府在京城的落脚处.你看到后厅是个灵堂.灵
幔之后是口棺材,死人躺在棺材之上,露出半个头,一双脚,棺材前的香炉
内焚化了许多纸钱.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/baihanfeng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"muwangfu",
]));

	setup();
	replace_program(ROOM);
}
