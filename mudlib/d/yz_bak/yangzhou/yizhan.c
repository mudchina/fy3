//Mr.music yangzhou 驿站

inherit ROOM;

void create()
{
	set("short", "驿站");
	set("long", @LONG
	这是是扬州城唯一的一家驿站--飞马驿站。因从未丢失任何
信件和货物而且传递及时，这里的声誉一直很好。邮送货物通常按规
定收些费用，至于信件，因为是街坊邻居或自己人，通常会少收甚至
不收任何费用。

LONG
	);

	set("exits", ([ 
		      "north" : __DIR__"jiedao3",
	             ]));
	set("objects", ([
		__DIR__"npc/youchai": 1 ,
                __DIR__"npc/gou": 1
	]) );

	setup();
}

int valid_leave(object me, string dir)
{
	object mbox;

	if( mbox = me->query_temp("mbox_ob") ) {
		tell_object(me, "你放好信箱，向邮差表示感谢。\n");
		destruct(mbox);
	}
	return 1;
}
