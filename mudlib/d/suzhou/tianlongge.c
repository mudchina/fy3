// Room: /d/suzhou/tianlongge.c

inherit ROOM;
void create()
{
	set("short", "天龙阁");
	set("long", @LONG
正对大门的是个书架，上面摆着不少书籍。房间两侧是几张半人来高的木桌，
几个小学童正摇头摆脑的高声念唱。一位长衫老者手持戒尺闭目养神，很是悠闲。
听说这位老者屡试不中之后心灰意懒，在家中教书渡日。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"chengnanjie2",
]));
	set("objects",([
//                __DIR__"obj/shujia" :1,
		__DIR__"npc/laoxiucai" :1,
]));
	set("no_clean_up", 0);

	setup();
}
