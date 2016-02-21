// Room: /d/huanggon/qianqinmen.c

inherit ROOM;

void create()
{
	set("short", "乾清门");
	set("long", @LONG
这是片东西横长的广场,东西北三面各有门,北面跨上雕龙台阶就是乾
清门,朱红的大门两边敞开.进了此门就是内廷.北边是乾清殿,南边经过数
十级台阶,乃是保和殿,西面通向御膳房.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"yuhuayuan1",
  "west" : __DIR__"yuhuayuan",
  "south" : __DIR__"baohedian",
  "north" : __DIR__"qianqingon",
]));

	setup();
}
int valid_leave(object me,string dir)
{
if (dir=="north"&&me->query("xxy/lvl")<4) 
return notify_fail("你刚想上殿，就被守殿侍卫给挡住了！\n");
return ::valid_leave(me,dir);
}
