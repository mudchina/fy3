
inherit ROOM;

void create()
{
        set("short", "水井");
	set("long", @LONG
有一眼清澈见底的水井，井旁搭着小土房。有几个妇人在这
里边洗衣，一边说说笑笑，还有个老人，挑着溜满的两桶清水，
颤颤悠悠地朝外走去。你可以在这喝口水。
LONG
	);
	set("resource/water", 1);

	set("exits", ([
                "south" : __DIR__"dongjie3",
	]));
	set("objects",([
		"/npc/man1":2,
		"/npc/man4":2,
	]));

	setup();
	replace_program(ROOM);
}

