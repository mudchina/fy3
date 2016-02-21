// Room: /d/huanggon/wumen
inherit ROOM;

void create()
{
  set ("short", "午门");
  set ("long", @LONG
午门是紫禁城的入口,高37.95米,门楼高耸,城楼内置钟鼓.两翼突
出,两翼和边角有四座方亭守望.门楼下有三个门,只有皇帝,每科的状元
探花,榜眼能由中门出入.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tiananmen",
  "north" : __DIR__"taihedian",
]));
  set("outdoors", "/d/huanggon");
  setup();
}
int valid_leave(object ob,string dir)
{
   if (!userp(ob)&&dir=="south"&&ob->query("home")==1) 
   return notify_fail("侍卫想了想道:还是保卫皇上去.\n");
   return ::valid_leave(ob,dir);
}