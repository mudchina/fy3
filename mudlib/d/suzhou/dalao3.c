// Room: /u/oldsix/room2/dalao2.c

inherit ROOM;

void create()
{
	set("short","苏州府大牢");
	set("long", @LONG
这是专门关押死囚犯人的牢房。牢内肮脏不堪，角落里一个木桶内也不知
装着什么，散发出阵阵恶臭。不时有几只绿头蝇飞进飞出。你心中只想着一件
事，那就是赶紧离开这个鬼地方。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north" :__DIR__"shenxun",
]));
	set("no_clean_up", 0);
	set("no_fight",1);
	set("no_magic",1);
	set("no_steal",1);
	setup();
	replace_program(ROOM);
}
