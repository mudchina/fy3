// Room: /d/suzhou/tuoman/hongxia.c

inherit ROOM;

void create()
{
	set("short","红霞楼");
	set("long", @LONG
远远就可以望见楼匾上的“红霞楼”三个墨绿篆字。楼下前后左右也都种得
茶花。只是这儿的花长得肥肥大大，早已失去昔日的容貌，也许是肥料太浓的缘
故。花丛之中斑斑红迹，空中还弥漫着丝丝血腥之气。
LONG
	);
	set("objects",([
		__DIR__"npc/tang":1,
]));
	set("exits", ([ /* sizeof() == 1 */
		"south":__DIR__"ru3",
]));
	set("outdoors","suzhou");
	set("no_steal",1);
	setup();
	replace_program(ROOM);
}
