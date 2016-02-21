// Room: /d/suzhou/meizhuang/chuangongfang1.c

inherit ROOM;

void create()
{
	set("short", "传功房");
	set("long", @LONG
这儿是黄钟公弟子的练功场所。除了在房间四周摆放了些兵刃、护具
之外，整个屋内空空荡荡，显而是为了练功方便。北面两间石屋便是黄钟
公居住的地方了。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"north":__DIR__"huangzhonggongju",
	"south":__DIR__"huajing",
]));
	set("objects",([
//	__DIR__"obj/bingqijia1":1,
		__DIR__"npc/chuangongdizi1":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
