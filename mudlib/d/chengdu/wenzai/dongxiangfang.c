//bye enter

inherit ROOM;

void create()
{
        set("short", "东厢房");
	set("long", @LONG
这是供来客休息的厢房，房子不大，但是很整洁，墙上挂
着一些字画。有个丫鬟正忙着为客人泡茶。
LONG
	);
	set("exits", ([ 
            "west" : __DIR__"yuanzi",
            ]));
        set("objects", ([
		"/d/chengdu/obj/chair":1,
            __DIR__"npc/yahuan" : 1,
             ]));

	setup();
	replace_program(ROOM);
}
