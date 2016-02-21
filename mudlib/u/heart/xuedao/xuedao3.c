// Room: /u/uuui/xuedao/xuedao3.c

inherit ROOM;

void create()
{
	set("short", "空地");
	set("long", @LONG
到了这里几乎你看不见什么人了。虽说是空地，但
冷清的很。地上总有斑斑血迹。还有些破旧的衣服。显
然曾经有人在这里跳过山崖。北面就是通往天魔洞的路
天上偶尔有几只秃鹫飞过
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xuedao4",
  "east" : __DIR__"xuedao2",
]));

	setup();
	replace_program(ROOM);
}
