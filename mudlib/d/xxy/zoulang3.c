// Room: /d/xxy/zoulang3.c

inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
一条靠着墙的回廊,另一边就是花园,从此看去,花园中一栋高楼十分威武. 
正是'我'级高手所住的天风楼.廊沿下的铁马在风中当当作响.向西是[威]级武士 
的居所. 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wushi.c" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"zoulang2",
  "north" : __DIR__"zoulang4",
  "west" : __DIR__"weiroom",
]));
  set("outdoors", "/d/xxy");

  setup();
}
int valid_leave(object me,string dir)
{
   object ob;
   ob=present("pai",me);
   if (dir=="west")       {
              if (!ob)
       return notify_fail("你不是等级武士，是如何进来的?\n");
              if (ob->query("name")=="铁牌")
       return notify_fail("你只是[扬]级武士，不能进这房间!\n");
       }
return ::valid_leave(me,dir);
} 
