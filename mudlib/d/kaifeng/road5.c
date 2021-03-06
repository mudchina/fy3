// Room: /d/kaifeng/road5.c

inherit ROOM;

void create()
{
	set("short", "御街");
	set("long", @LONG
御街是横贯开封南北的主要街道，也是皇上出巡的要道。街道两边
店铺亭台不断，小贩叫卖，行人来往，车马喧哗，一派繁华，南边的高
桥就是州桥，西面是龙亭寺。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "southup" : __DIR__"road4",
  "north" : __DIR__"road6",
  "west" : __DIR__"longting",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
