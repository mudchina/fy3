// Room: /d/huanggon/dawu.c

inherit ROOM;

void create()
{
	set("short", "海大富居处");
	set("long", @LONG
这是一间大房,房中物事稀少,只一张桌子,一张椅子,桌上放着茶壶
茶碗。墙壁上安着两座铜烛台，各点着一根蜡烛，西边一扇门半掩着,显
然是内室,里面传来一些声响.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ruidong.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"neishi",
  "north" : __DIR__"yuhuayuan",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
