
inherit ROOM;

void create()
{
	set("short", "武器库");
	set("long", @LONG
这里是武器库，架上摆满了各种武器,任由武士门挑选。
LONG );
	set("exits", ([
		"east" : __DIR__"kang2",
	]));
	set("objects", ([
"/d/emei/obj/zhujian":2,
"/obj/weapon/whip":1,
"/d/obj/weapon/sword/duanjian":1,
"/obj/weapon/blade":1,
		"/d/city2/obj/fuchen" : 1,
	]));
//	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}
