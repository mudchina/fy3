// Room: /d/suzhou/guandao2.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这是条连接中州与苏州的官道。由于此处远离城镇，所以路上行人渐稀。偶
而也会有一两骑从你身边飞驰而过，但大都是匆匆过客。道路两旁除了荒丘之外
再也看不见什么了。东北是苏州方向，往西则是中州。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"westup" :__DIR__"huangqiu1",
  "northeast" : __DIR__"guandao1",
]));
	set("objects",([
		"/npc/man4":1,
	]));
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
