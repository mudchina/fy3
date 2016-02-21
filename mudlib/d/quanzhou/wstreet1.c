// Room: /d/quanzhou/wstreet1.c

inherit ROOM;

void create()
{
	set("short", "西街");
	set("long", @LONG
这里是泉州城的西街,不时有官宦人家的女眷坐了轿子向城西而去. 
而来往的人们,也大多手中带着香烛. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"qianzhuang",
  "east" : __DIR__"nstreet3",
  "west" : __DIR__"wstreet2",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/daoren.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
