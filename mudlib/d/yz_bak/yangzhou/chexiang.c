// music yangzhou's 车箱内

inherit ROOM;

void do_hua();
void go_ahead(object);

void create()
{
  set ("short", "车厢内");
  set ("long", @LONG
	你正躺在马车车厢内，听着马蹄声，直想打盹。

LONG
    );
    set("sleep_room",1);

//  set("objects", ([ 
//                   __DIR__"npc/shusheng" : 1,
//                 ]));
  set("exits", ([  
//    "west" : __DIR__"yumatou",
//    "south" : __DIR__"changjiangkou",
//    "east"  : __DIR__"yunhe2",
]));


  setup();
}

void init()
{
    call_out("go_hankou",20,this_player());
}


void go_hankou(object me)
{
    tell_object(me,"车夫叫醒你，说：到汉口啦！\n");
    me->move("/d/hankou/inn");
return;
}

