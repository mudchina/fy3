// Room: /u/yuki/room/shilu.c

inherit ROOM;

void create()
{
	set("short", "石路");
	set("long", @LONG
你走到这条石路上，前面已经可以隐隐约约看到一座小小的院
落的影子，你可以非常的肯定，琴声就是从这个小院子里发出来的
想到立刻就可以见到大庄主黄钟公了，你不禁一阵紧张。 
LONG
	);
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
