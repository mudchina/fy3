// Room: /d/zhongzhou/yaopuboss.c

inherit ROOM;

void create()
{
	set("short", "药铺帐房");
	set("long", @LONG
这里就是药铺帐房，药铺的欧阳老板正坐在太师椅上抽大烟呢。药
铺的帐房先生巫攀冰在一旁忙着算帐。看着里面一大堆的帐本，你想要
是那收来的钱是我的可就好了。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wupanbing.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yaopu",
]));

	setup();
	replace_program(ROOM);
}
