//congwu
  

inherit ROOM;

void create()
{
	set("short","龙门镖局");
	set("long", @LONG
这儿是中州第一号镖局，正对面是一人多高的香案，双旁坐着
众位镖头。亭中央的虎头椅上正是龙门镖局的总镖头都大锦。亭外
竖着块招牌(pai)，不知写些什么。
LONG
	);

	set("exits", ([
		"east" : __DIR__"wendingbei4",
		 
	]));
/*
	set("item_desc", ([
	"pai":
"		    告示
－－－－－－－－－－－－－－－－－－－－－－
本镖局提供各种等级的镖师为你提供安全保证。
一次最多可以招慕四个镖师，根据招慕的镖师武
功及数量，本镖局收取不同的费用。
指令：zhaomu <镖师名> <数目>

镖师名         说     明         费     用
－－－－－－－－－－－－－－－－－－－－－－
qinglong       青龙镖师          五十两黄金
baihu          白虎镖师          四十两黄金
lvbao          绿豹镖师          二十两黄金
chilang        赤狼镖师          十两黄金
jinshe         金蛇镖师          一两黄金
－－－－－－－－－－－－－－－－－－－－－－
本镖局共有镖师40名，欲招从速！
－－－－－－－－－－－－－－－－－－－－－－
                        龙门镖局总镖头都大锦\n"
本镖局暂停整顿。
	]));
*/
set("item_desc",([
"pai":"本镖局暂停整顿.\n",
]));
	set("objects",([
		__DIR__"npc/dudajin":1,
	]));
	setup();
	replace_program(ROOM);
}

