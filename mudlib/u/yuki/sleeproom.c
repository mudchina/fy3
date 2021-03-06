// Room: /u/yuki/sleeproom.c

inherit ROOM;

void create()
{
	set("short", "猫卧室");
	set("long", @LONG
这里是羚兰的卧室。屋子很小，一张软软的席梦思床就占了屋子的三分
之一。床上是厚厚 的淡紫色的Hello Kitty的羽绒被和蓬蓬松松的大枕头，
地上铺着厚厚的羊毛地毯，床头柜上放着电话、猫头闹钟、Zippo打火机
和白色的万宝路，旁边是大大的水晶烟灰缸。这间屋子的窗帘密不透风，
看来羚兰是喜欢晚上不睡，早上不起的典型网虫儿！这里的电脑只安装
了三角洲特种兵游戏，工作的间隙，羚兰就会偷偷溜进来打个昏天黑地。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "yuki" : __DIR__"workroom",
]));
	set("sleep_room", 1);
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
