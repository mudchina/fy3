// Room: /d/suzhou/meizhuang/qingshilu.c

inherit ROOM;

void create()
{
	set("short", "青石板路");
	set("long", @LONG
这条路倚山傍水，一直通向庄内。但见路两旁遍地都是梅树，枝叶茂
密，想象初春梅花盛开之日，香雪如海，定然观赏不尽。你看到此处不禁
暗自点头，“梅庄”真不虚此名啊。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"meizhuang",
	"north" :__DIR__"qingshilu2",
]));
	set("objects",([
		__DIR__"npc/langgou":2,
]));
	set("no_clean_up", 0);
	set("outdoors","meizhuang");
	setup();
	replace_program(ROOM);
}
