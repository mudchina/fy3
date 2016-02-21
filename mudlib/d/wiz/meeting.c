// music   wiz's 巫师会议室
inherit ROOM;

void create()
{
	set("short", "巫师会议室");
	set("long", @LONG
	这里是巫师会议室，是巫师们商讨游戏发展和完善的场所。
由于一般玩家谢绝进入，所以各位都是自己人。请随意发表高见和
在巫师留言板上留言。各位最好能经常发表点进展打算等，免得被
别的巫师以为你退出或是跳巢了。

LONG 
);

	set("exits", ([ /* sizeof() == 1 */
	"down" : "/d/zhongzhou/yinghaoup" ]));

	set("valid_startroom", 1);
	set("no_fight", "1");
	set("no_clean_up", 0);
	setup();

        call_other("/obj/board/wizboard", "???");
}

void init()
{
	object me=this_player();
	if( !wizardp(me)&& me->query("id")!="ouyangxiu")
		me->move("/d/zhongzhou/yinghaoup");
}

