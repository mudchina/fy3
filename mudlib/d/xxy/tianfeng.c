// Room: /d/xxy/tianfeng.c

inherit ROOM;

void create ()
{
  set ("short", "天风楼");
  set ("long", @LONG
天风楼是专为我级高手准备的,一眼看去,点点灯火,隐隐楼台,绿树掩映
之中,别有一番气象.西面有楼梯可以上去.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/tianshou.c" : 2,
]));
  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"gardon4",
  "north" : __DIR__"gardon3",
  "westup" : __DIR__"up1",
]));

  setup();
}
int valid_leave(object me,string dir)
{
   object ob;
   ob=present("pai",me);
   if (dir=="westup")
         {
            if (!ob||ob->query("name")!="金牌")
                 return notify_fail("这是最高级武士的住所，企是你能进的!\n");
          }
return ::valid_leave(me,dir);
}