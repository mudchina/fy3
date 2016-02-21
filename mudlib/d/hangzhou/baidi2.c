// Room: /d/hangzhou/baidi2.c

inherit ROOM;

void create()
{
	set("short", "白堤");
	set("long", @LONG
柳枝随风,桃花迎人.远观西湖,烟波浩淼,水天一色,白云悠悠.微风 
带着湖面的水汽扑面而来.脚边的各种繁花吐蕊,千姿百态.游人如织.远 
处高山倒印于湖水之中,如真似幻.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"suci",
  "east" : __DIR__"baidi1",
]));
	set("outdoors", "/d/hangzhou");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/youke.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
