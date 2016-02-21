// Room: /d/emei/yushulou.c

inherit ROOM;

void create()
{
	set("short", "御书楼");
	set("long", @LONG
楼阁凌空,丛林深锁,此处是收藏历代帝王题留墨迹的所在,故名
御书楼,楼下是一座石拱虹桥,专为跨瑜伽河簦临此楼而设,是名为御
书桥,桥下流水潺潺,不绝于缕.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/ling.c" : 1,
  __DIR__"npc/li.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"ligouyuan",
]));

	setup();
	replace_program(ROOM);
}
