// Room: /u/oldsix/room1/taihu2.c

inherit ROOM;

void create()
{
	set("short", "太湖");
	set("long", @LONG
你依着阿碧之言，将小舟划入一处小港，但见水面上生满了荷叶，若不是她
指点，决不知荷叶间竟有通路。但见水面上全是菱叶和红菱，清波之中，经菱绿
叶，鲜艳非凡。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
}
int init()
{
    object me;
    me=this_player();
    call_out("greeting",5,me);
}
void greeting(object me)
{
	me->move(__DIR__"taihu3.c");
}
