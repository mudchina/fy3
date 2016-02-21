// Room: /d/huanggon/yuhuayuan.c

inherit ROOM;

void create()
{
	set("short", "御花园");
	set("long", @LONG
只见假山小亭,回廊画栋,别处难得一见的奇花异卉,在此却如闲花
野草一般,举目皆是,沿着墙角,走廊摆着些盆栽的花木,在盆中泥土之上,
撒上了细小的珍珠,珊瑚.南边就是海大富的居处.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"qianqinmen",
  "north" : __DIR__"shangshanjian",
  "south" : __DIR__"dawu",
]));

	setup();
	replace_program(ROOM);
}
