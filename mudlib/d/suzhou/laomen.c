// Room: /u/o/oldsix/room/laomen.c

inherit ROOM;

void create()
{
	set("short", "大牢牢门");
	set("long", @LONG
再往下走是关押犯人的大牢牢房。普通人如果没有允可是不让进入的。牢
门两边是看门的狱卒，正斜着眼打量着你。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east" :__DIR__"road5",
	"down" :__DIR__"shenxun",
]));
	set("objects",([
		__DIR__"npc/yuzu" :2,
]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
}
int valid_leave(object me,string dir)
{
	if(dir=="down")
		return notify_fail("咦？没事进牢房干嘛，探监？\n");
	return 1;
}
