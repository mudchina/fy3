// Room: /d/new/tianxia/rollgate
inherit ROOM;

void create ()
{
  set ("short", "天下会关卡");
  set ("long", @LONG
沿着大路向前，两边青山相连，中间一道高大的关卡，大书[天下会]
三字。从关卡看过去，楼阁亭台，朋比接踵。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/gategard.c" : 1,
]));
  set("outdoors", "/d/new");
  set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/new/robber/road4",
  "east" : __DIR__"1guan1",
]));

  setup();
}
int valid_leave(object who,string dir)
{
  object ob;
     ob=present("bangzhong",this_object());
   if (dir=="west"||!objectp(ob)||(who->query("banghui")=="天下会"||who->query_temp("tianxia/pass_answer")))
     return ::valid_leave(who,dir);
   else 
     message_vision("$N大声喝道，来者通名!(answer xxx).\n",ob);
 return notify_fail("");
}
