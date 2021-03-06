// Room: /d/suzhou/meizhuang/shibanlu1.c

inherit ROOM;

void create()
{
	object ob;
	set("short", "石板路");
	set("long", @LONG
一条宽阔的石板路。道路两侧遍地梅树，透过梅树依稀是重峦叠障的
远山。微风习习煞是怡人，主人想必费了不少心思。南面房中飘来阵阵香
气，北面是梅庄书房。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north":__DIR__"shufang",
	"east":__DIR__"shibanlu2",
	"south":__DIR__"chufang",
  "west" : __DIR__"yuemen",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	ob=new(__DIR__"npc/nandizi"+(random(4)+1));
	ob->set("id","huzhuang dizi");
	ob->set("combat_exp",10000);
	ob->move(this_object());
}
int valid_leave(object me,string dir)
{
	object npc;
	npc=present("nan dizi",this_object());
	if(!npc)	return ::valid_leave(me,dir);
	if(dir=="north"&&me->query("family/family_name")!="孤山梅庄")
	return notify_fail("护庄弟子笑道：请别乱闯本庄！\n");
	return ::valid_leave(me,dir);
}
