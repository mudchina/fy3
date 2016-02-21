// Room: /d/zhongzhou/maodun.c

inherit ROOM;

void create()
{
	set("short", "矛盾甲胄店");
	set("long", @LONG
这是间小小的店铺,铺中的主人据说有一手修补甲胄的绝艺,只要你
需要,可以随时给钱修补.一些还没修理过的铁甲,铜盔之类的东西胡乱扔
在地上,看上去很杂乱.墙上有块牌子(paizi).
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/maoduntianshi.c" : 1,
]));
set("item_desc",([
"paizi":"修补甲胄防具(xiubu xxx).\n",
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wendingnan2",
]));

	setup();
	replace_program(ROOM);
}
