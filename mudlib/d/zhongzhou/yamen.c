//yamen
  

inherit ROOM;

void create()
{
	set("short", "县衙门");
	set("long", @LONG
这就是中州县衙门，两旁的肃静和威武的牌子让你有点心惊胆颤。
两边的侍卫冷冷的看着你，看你要状告何人。如果你是来办理结婚的
话，要到后面的师爷处教一定手续费，方可办理。
LONG
	);

	set("exits", ([
		"east" : __DIR__"wendingbei3",
		"enter" : __DIR__"zoulang",
		
	]));
	 set("objects", ([
	__DIR__"npc/yayi" : 2,
	]));

	setup();
	replace_program(ROOM);
}

