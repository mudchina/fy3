// musix uangzhou's 池中

inherit ROOM;

void create()
{
	set("short", "荷花池中");
	set("long", @LONG
	你置身于清澈见底的荷花池中，池面荷花盛开，池面碧波荡漾，
你只想痛快的游游泳，洗个澡，暂时忘却江湖纷争，世事烦扰。

LONG
	);

	set("exits", ([ /* sizeof() == 1 */
//		"up" : __DIR__"hehuachi",
	]));

	set("no_fight", 1);
	set("bath_room", 1);
	set("bath_equipment", "荷花池");

	setup();
}

void init()
{
add_action("do_jump","jump");
add_action("do_back","back");
add_action("do_back","climb");
add_action("do_swim","swim");
add_action("do_swim","you");
}

int do_jump()
{
return 1;

}

int do_back()
{

say(this_player()->query("name")+"爬上岸去.\n");
tell_object(this_player(),"你恋恋不舍的爬上了岸。\n");

this_player()->move("/d/yangzhou/hehuachi");
return 1;

}

int do_swim()
{

return 1;

}
