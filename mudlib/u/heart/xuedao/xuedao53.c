// Room: /u/uuui/xuedao/xuedao53.c

inherit ROOM;

void create()
{
	set("short", "青石阶");
	set("long", @LONG
从绿油油的草坪中，伸出一条石阶路。路上都是青
色的巨石铺成的台阶，仔细看去，竟然每级台阶都是一
整条青石铺成。台阶上隐隐有些坑洼，看起来很象脚印
难道是武林高手特意留下的痕迹？再向西去，就是一扇
大门了。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"xuedao52",
  "south" : __DIR__"xuedao54",
  "east" : __DIR__"xuedao56",
  "west" : __DIR__"xuedao57",
]));

	setup();
	replace_program(ROOM);
}
