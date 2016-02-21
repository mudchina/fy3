// Room: /d/huanggon/lianxishi.c

inherit ROOM;

void create()
{
	set("short", "练习室");
	set("long", @LONG
但见屋中空空洞洞,墙壁边倚着几个牛皮的人形,梁上垂下来几只大布
袋，里面似乎装作米麦或是沙土，此外便只一张桌子，桌前挂着块桌帷,
桌上摆了十多盘点心.似乎刚被人动过.
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"yuhuayuan1",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 4 */
  __DIR__"obj/qiancenggao.c" : 1,
  __DIR__"obj/roushaobin.c" : 1,
  __DIR__"obj/wandouhuang.c" : 1,
  __DIR__"obj/xiaoshaomai.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
