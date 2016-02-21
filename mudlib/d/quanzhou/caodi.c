// Room: /d/quanzhou/caodi.c

inherit ROOM;

void create()
{
	set("short", "草地");
	set("long", @LONG
这是一片绿茵茵的草地,就在草地的边缘,有两块巨石相叠加在一起
微风吹过,石头就晃动不已,细看下,石上还刻着一些字'碧玉毯','天然
妙机'等.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xiaolu",
  "north" : __DIR__"shengmu",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
