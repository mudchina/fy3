// Room: /d/huanhua/houyuan.c

inherit ROOM;

void create()
{
	set("short", "后院");
	set("long", @LONG
剑庐的后院是一片较大的场地,在院落左边是一块空地,平是弟子们多在
此处练武,空地四周是高大的常青树,一条石子路就在空地边上绕过,直接连
通听雨楼和内厅.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tingyu",
  "south" : __DIR__"neiting",
]));

	setup();
	replace_program(ROOM);
}
