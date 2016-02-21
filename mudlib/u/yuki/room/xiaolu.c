// Room: /u/yuki/room/xiaolu.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
这里是通往梅花亭的小路。虽是小路但也全是用大理石铺地
两边种有一些北方很少见的植物。使得这里冬天也会另一翻美丽
的景象。北面有一座汉白玉的小桥。再往前就是文明整个江湖的
梅花亭了。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"baiqiao",
  "westdown" : "/d/meizhuang/qingshilu2",
]));

	setup();
	replace_program(ROOM);
}
