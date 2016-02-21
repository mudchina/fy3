
inherit ROOM;

void create()
{
	set("short", "棺材店内室");
	set("long",
	     "\n一进门，一股腐臭让你几乎要窒息了。屋里满是棺材(guancai)。\n"
	);
	set("exits", ([
		"west" : __DIR__"guancai1",
	]));
	set("item_desc", ([
		"guancai" : "\n棺材板很结实，上面积了些灰尘。\n" ,
	]));
	setup();
	replace_program(ROOM);
}

