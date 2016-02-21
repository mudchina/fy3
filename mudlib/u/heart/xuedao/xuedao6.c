// Room: /u/uuui/xuedao/xuedao6.c

inherit ROOM;

void create()
{
	set("short", "天魔洞");
	set("long", @LONG
这里就是天魔洞了。两侧的墙上悬挂着油毡火把，火
苗随风跳动着，昏暗的光线中，你隐约看见对面的墙上刻
着一些石像。石像描述的是个妖魔的形象，手里拿着钢叉
另人不解的是石像突出了墙面。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/4");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"xuedao7",
  "east" : __DIR__"xuedao4",
]));

	setup();
	replace_program(ROOM);
}
