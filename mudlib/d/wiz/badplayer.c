// music.  意图不轨者的审讯室

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "意图不轨者的审讯室");
  set ("long", @LONG
	这里是意图不轨者的审讯室。好好反思下你干的事，你一定是严重违反
了玩家条例。国有国法，家有家规，本MUD也有条例，再读读 help rules 吧，
如果你多次违反规定，将送入牢房终生监禁。尊重别人也爱护自己，请记住这是
玩家们共有的世界。

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
//                     __DIR__"npc/panguan" : 1,
                 ]));

  set("no_magic", 1);
  set("valid_startroom", 1);

  setup();
        replace_program(ROOM);

}


