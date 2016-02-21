// Room: /d/sandboy/pengdi 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "盆地");
  set ("long", @LONG
但见山花繁锦，绿草如茵，行到了一处盆地之中.这片盆地，
足足有百亩大小，四面山峰环抱，在群山叠幛中，自成一片景色。 
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"shandao8",
]));
  set("outdoors", "/d/sandboy");
  setup();
}
void init()
{
    add_action("do_in","yaoqing");
}
int do_in()
{
    command("yaoqing xxy");
    return 1;
}