// Room: /d/room/dongzhong.c

inherit ROOM;

void create()
{
	set("short", "九老仙府");
	set("long", @LONG
九老仙府在武林中一直是个神秘的地方,据说轩辕黄帝访道于峨眉山
在此见一老人须眉皆白,便惊奇地问'就你老一人么?'答'九老居此',九老
洞因此而名,在洞边的石壁上有一幅对联(lian).
LONG
	);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "lian" : "问九老何处飞来,一片碧云天影静.
悟三乘遥空望去,四山明月此间多
         -----四川刘咸荣
",
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"qiandong.c",
  "out" : __DIR__"dongwai.c",
]));

	setup();
	replace_program(ROOM);
}
