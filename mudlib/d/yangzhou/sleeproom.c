// Room: /u/swordman/yangzhou/sleeproom
inherit ROOM;

void create ()
{
  set ("short", "扬州客栈");
  set ("long", @LONG
这里是扬州酒楼的二楼客房，供五湖四海的来客们休息休息。由于
客房的服务良好，来客大多可以高枕无忧的美美睡上一觉。客栈内设有
几种不同档次的卧房，以满足不同客人的需要。
LONG);

  set("light_up", 1);
  set("sleep_room", 1);
  set("hotel",1);
  set("no_magic", 1);
  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"jiulou",
]));

  setup();
}
int valid_leave(object me, string dir)
{
        if ( dir == "down" ) me->delete_temp("rent_paid");

        return ::valid_leave(me, dir);
}

