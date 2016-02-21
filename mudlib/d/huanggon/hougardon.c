// Room: /d/huanggon/hougardon.c

inherit ROOM;

void create()
{
	set("short", "后花园");
	set("long", @LONG
后花园显然的比较宽敞,小桥流水,假山竹林,花木深处还有石桌椅,
小巧处别见雅致,两只黄鹂鸟在枝头一唱一和,池塘中鸳鸯对对,水中红
鲤鱼划出一道道虹影.西面是座石屋.
LONG
	);
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"xiaogardon1",
  "south" : __DIR__"kangneiting",
  "west" : __DIR__"shiwu",
]));

	setup();
	replace_program(ROOM);
}
