//xiaren	
  

inherit ROOM;

void create()
{
	set("short", "西厢房");
	set("long", @LONG
这里是县太爷府下人的住处。屋内没什么东西，只有一张桌子
和几张竹凳。屋角的盆里放着一大堆的衣服。有几个丫鬟没事正在
绣花。
LONG
	);

	set("exits", ([
		"east" : __DIR__"huayuan",
		 		 
	]));
	set("objects", ([
	__DIR__"npc/yahuan" : 2,
	]));

	setup();
	replace_program(ROOM);
}

