//Mr.music yangzhou 姚记钱庄

inherit BANK;

void create()
{
	set("short", "姚记钱庄");
	set("long", @LONG
	这里是城里最有名的钱庄--姚记钱庄，利息虽低但决不拖欠。
听说主人姚老板和府衙有很深的渊源，流氓土匪一般都不来这找麻烦。
所以这里一向是生意很好。

LONG
	);

	set("exits", ([ 
		      "south" : __DIR__"dongguan1",
	             ]));
set("no_fight",1);
	set("objects", ([
		__DIR__"npc/yaolaoban": 1
	]) );

	setup();
}

int valid_leave(object me, string dir)
{
        tell_object(this_player(),"你拍了拍口袋，笑了笑，走出了钱庄. \n");
	return 1;
}
