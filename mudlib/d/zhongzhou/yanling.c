//yanling
inherit ROOM;
void create()
{
  set ("short", "延陵西路");
  set ("long", @LONG
从市中心往西走就到了延陵西路，这里中州的一条老街。两边的房屋
看上去已经很陈旧了。街道的南面的一间房子看上去象一个店铺。
LONG);

set("outdoors","/d/zhongzhou");

  set("exits", ([  
    "west" : __DIR__"yanling1",
    "south" : __DIR__"dangpu",
    "east"  : __DIR__"shizhongxin",
]));
       
	set("objects", ([
	__DIR__"npc/liumang" : 2,
	]));
	 setup();
        replace_program(ROOM);
}
