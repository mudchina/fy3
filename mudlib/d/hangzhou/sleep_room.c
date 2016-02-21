// Room: /d/hangzhou/sleep_room.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "东厢房");
	set("long", @LONG
两边一长溜的通铺,胡乱扔着几床被子.中间的一条走道仅能容人走 
过.时不时见到一些破衣衫,赃袜子之类的东西.最里面的墙上开了两扇窗 
子.用白纸糊过.几只老鼠在炕头好奇地看着你. 
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"back_yard.c",
]));
	set("no_clean_up", 0);
	set("sleep_room", 1);

	setup();
	replace_program(ROOM);
}
