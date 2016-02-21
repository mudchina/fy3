//bye enter 

inherit ROOM;
inherit F_DEALER;

void create()
{
        set("name", "银杏酒楼");
        set("short", "银杏酒楼二楼");
	set("long", @LONG
你坐在成都最豪华的酒楼上，看着楼下的凡人忙忙碌碌，
心情很是愉快，所谓“对酒当歌，人生几何”，还犹豫什么，
来几斤上好的花雕酒吧！墙上挂着价格牌子(paizi)。
LONG
	);

	set("item_desc", ([
		"paizi" : "本店出售烤鸭及上等花雕酒。\n",
	]));

	set("exits", ([
                "down" : __DIR__"jiulou1",
	]));
        set("objects", ([
                  __DIR__"obj/chair" : 4,
                   ]));

	setup();
	replace_program(ROOM);
}
