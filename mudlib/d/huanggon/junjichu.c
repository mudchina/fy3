// Room: /d/huanggon/junjichu.c

inherit ROOM;

void create()
{
	set("short", "军机处");
	set("long", @LONG
军机处是专门处理紧急事务的地方,有许多呈给御览的奏折,大多先经
此处军机大臣浏览过之后,才上呈,皇帝有什么事,也都交军机处处理.只见
屋中堆了许多折子,地方并不宽敞.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/suoetu.c" : 1,
  __DIR__"npc/mingzhu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"zhonghedian",
]));

	setup();
	replace_program(ROOM);
}
