//guandimiao
  

inherit ROOM;

void create()
{
set("short","破庙");
	set("long", @LONG
这是小巷中的一座破庙，许多残破的青砖散落在地下，从墙洞中露出的
一根大柱子已看不出本来的颜色，几个叫花子懒散的躺在门口。
LONG
	);

	set("exits", ([  
		"southeast" : __DIR__"xiaoxiang1",
				
"in":__DIR__"inpomiao",
	]));
	set("objects",([
		__DIR__"npc/xiaojiaohua":2,
		__DIR__"npc/laojiaohua":1,
	]));

	setup();
	replace_program(ROOM);
}

