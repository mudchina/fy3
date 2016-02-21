//wendingbei1
  

inherit ROOM;

void create()
{
	set("short", "文定北街");
	set("long", @LONG
这是中州城文定北街，宽敞的街道看的人不竟心情一畅。街道的东
面有一座酒楼，因离街不远，里面划拳喝酒声音历历在耳。听的在耳你
也不觉想去痛饮一杯。西面暗暗的好象有一条小巷。 
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"east" : __DIR__"yinghao",
		"south" : __DIR__"shizhongxin",
		"west" : __DIR__"xiaoxiang",
		"north" : __DIR__"wendingbei2",
	]));
	set("objects", ([
	__DIR__"npc/xingren" : 1,
	__DIR__"npc/xiaohai": 1,
	]));

	setup();
	replace_program(ROOM);
}

