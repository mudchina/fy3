// Room: /d/emei/dongzhong1.c

inherit ROOM;

void create()
{
	set("short", "中洞");
	set("long", @LONG
这是一个高约百丈的洞窟,从洞顶上垂下千万条石钟乳,色泽洁白
其形状千奇百怪,真是鬼斧神工,向左走就是休息石室,从后洞吹来阵
阵凉风,伴随着隆隆的声响.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xuan.c" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"dongzhong2",
  "west" : __DIR__"sleeproom",
  "south" : __DIR__"qiandong.c",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
