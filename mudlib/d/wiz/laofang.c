#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "意图不轨者的牢房");
  set ("long", @LONG
	这里是意图不轨者的牢房，看来你是出不去了。好好反思下你干的事，
你一定是严重违反了玩家条例多次，没人会帮助你了。国有国法，家有家规，
本MUD也有条例，再读读 help rules 吧，如果WIZS不能原谅你，那你就只好
选择自杀 suicide -f 了。请记住这是玩家们共有的世界。

LONG
);

//  set("item_desc", ([ /* sizeof() == 2 */
//  "south" : (: look_door,     "south" :),
//  "door" : (: look_door,     "south" :),
//                   ]));
  set("exits", ([ 
//  "up"    : "/d/wiz/meeting",
//  "down"  : "/d/yangzhou/mingyue2",
//  "musix" : "/u/musix/musixroom",

]));
  set("no_fight", "1");

  set("objects", ([ 
//                     __DIR__"npc/yingying" : 1,
                 ]));

  set("no_magic", 1);
  set("valid_startroom", 1);

  setup();
//  call_other("/obj/board/guestboard","???");

}

void init()
{
	add_action("do_nothing","chat");
	add_action("do_nothing","chat*");
	add_action("do_nothing","tell");
	add_action("do_nothing","rumor");
	add_action("do_nothing","rumor*");
	if( wiz_level(this_player())==0)
		this_player()->set("startroom","/d/wiz/laofang");
}

int do_nothing()
{
	object me=this_player();
	if( !wizardp(me))	return 1;
	return 0;
}


