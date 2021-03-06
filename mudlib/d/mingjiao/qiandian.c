//room: /d/mingjiao/qiandian.c
inherit ROOM;
void init();
void create()
{
        set("short","明教前殿");
        set("long", @LONG
这里是明教前殿，通往明教的中心宝殿。前殿顶高悬着八盏明灯
，两旁是精壮佩剑武士剑气森严逼人。使人不战而傈正前方摆放两张
木椅。上座两人。左首杨逍右首范遥。此二人正是被称“逍遥二仙”
的光明左右使者。负责守卫明教这一咽喉之路。
LONG
           );
        set("exits",([
            "north" : "d/mingjiao/dadian.c",
	"south":__DIR__"tianweitang",
           ]));
        set_temp("tieling",8);
        set("objects",([
                      __DIR__"npc/yangxiao":1,
                        __DIR__"npc/fanyao":1,
                        ]));
        setup();
}

int valid_leave(object me,string dir)
{
	string bh;
	object npc1,npc2;

	bh=(string)me->query("banghui");
	npc1=present("yang xiao",this_object());
	npc2=present("fan yao",this_object());

	if( bh && bh!="明教" && dir=="north" && objectp(npc1))
	return notify_fail("杨逍昂首道：非本教兄弟不得入内！\n");
	if( bh && bh!="明教" && dir=="north" && objectp(npc2))
	return notify_fail("范遥道：只有本教弟子才能拜见本教张教主！\n");
	return ::valid_leave(me,dir);
}

