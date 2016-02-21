// thd:practise_room.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "练功房");
	set("long", @LONG
这里是桃花弟子的练功房。房中摆着几个蒲团，有几个弟子正坐在上
面打坐练气、吐纳练精。房中静悄悄的，谁也不说话，大概是怕影响了别
人。这里不许比武，这也是为了防止发出响声使别人走火入魔.
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "obj/tiexiao" :  1,
	]));

      set("exits", ([ /* sizeof() == 1 */
	    "south" : __DIR__"in_road3",
	]));
	
	set("no_fight",1);
      
	setup();
	replace_program(ROOM);
}

