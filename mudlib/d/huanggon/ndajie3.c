// Room: /d/huanggon/ndajie3.c

inherit ROOM;

void create()
{
	set("short", "北大街");
	set("long", @LONG
北大街横贯东西,从皇宫的后门穿过.这条街道位于京城的北面,店铺
较少,所住的都是些穷苦人.来往的人多面带菜色.街道在此转弯,向南那就
到了西单的街道了.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"ndajie2",
  "south" : __DIR__"xidan",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
