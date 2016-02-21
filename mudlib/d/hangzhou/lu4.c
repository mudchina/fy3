// Room: /d/hangzhou/lu4.c

inherit ROOM;

void create()
{
	set("short", "山道");
	set("long", @LONG
崎岖的山道在山林中蜿蜒,时有野兽的吼叫从山中传来.这里一到天
黑就没人走动,你自然地加快脚步.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"lu3",
  "southdown" : "/d/jindezheng/jindezhen",
]));

	setup();
	replace_program(ROOM);
}
