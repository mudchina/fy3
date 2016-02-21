//yanlingdong
inherit ROOM;
void create()
{
  set ("short", "延陵东路");
  set ("long", @LONG
从市中心往东走就到了延陵东路，这里中州的一条老街。两边的房
屋看上去已经很陈旧了。路南有一家老字号的自助餐厅。出门在外到这
种地方来转一转也别有一番滋味。
LONG);

set("outdoors","/d/zhongzhou");

  set("exits", ([  
    "west" : __DIR__"shizhongxin",
    "north" : __DIR__"biwuchangmen.c",
    "south" : __DIR__"canting",
    "east"  : __DIR__"yanlingdong1",
]));
       
	set("objects", ([
	__DIR__"npc/liumang" : 1,
	__DIR__"npc/yahuan" : 1,
	]));
	 setup();
        replace_program(ROOM);
}
int valid_leave(object who,string dir)
{
        object npc;
        npc=present("guard man",this_object());
        if(dir=="east") {
                who->delete_temp("rent_paid");
                return ::valid_leave(who,dir);
        }
        if(dir=="north"&& ! (int)who->query_temp("rent_paid")
                && objectp(npc))        {
        return notify_fail("门卫冷笑道：没付银子就想进去，滚开。\n");
                        }
        return ::valid_leave(who,dir);
}

