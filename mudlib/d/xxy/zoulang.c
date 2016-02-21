// Room: /d/xxy/zoulang 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "走廊");
  set ("long", @LONG
一条靠着墙的回廊,另一边就是花园,从此看去,花园中一栋高楼十分威武.
正是'我'级高手所住的天风楼.廊沿下的铁马在风中当当作响.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"zoulang1",
  "south" : __DIR__"datang",
]));
  set("outdoors", "/d/xxy");
  setup();
}
int valid_leave(object me,string dir)
{      
         if(!userp(me)&&me->query("home")==1&&dir=="south")
          return notify_fail("");
        return ::valid_leave(me,dir);
}
