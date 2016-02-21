// Room: /d/huanggon/qianzhua.c

inherit ROOM;

void create()
{
	set("short", "姚氏钱庄");
	set("long", @LONG
这是一家老字号的钱庄，已有几百年的历史，在全国各地都有分店。
它发行的银票信誉非常好，通行全国。不管你走到哪里，在任何一个本
庄分店都可以任意存取。墙上挂着一个牌子(paizi)。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yaodifei.c" : 1,
]));
	set("no_beg", 1);
	set("no_fight", 1);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"echangan1",
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "paizi" : "
本庄有利息，至少百分之一。

      存钱        deposit或者cun

      取钱        withdraw或者qu

      钱币兑换    convert或者duihuan

      查帐        check或者chazhang
",
]));

	setup();
	replace_program(ROOM);
}
