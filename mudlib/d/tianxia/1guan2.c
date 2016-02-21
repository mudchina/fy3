// Room: /d/new/tianxia/1guan2.c

inherit ROOM;

void create ()
{
  set ("short", "山谷");
  set ("long", @LONG
眼前是个极大的山谷，四面青山，苍苍莽莽.底部散落着几栋建筑.
细看处,隐含玄机.东面是片开阔的空场,向北有条绿茵路.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"stone1",
  "northwest" : __DIR__"1guan1",
  "east" : __DIR__"1guan3",
]));
  set("outdoors", "/d/new");

  setup();
}
void init()
{
  object ob;
  ob=this_player();
  remove_call_out("greeting");
  call_out("greeting",random(5)+1,ob);
  return;
}
void greeting(object ob)
{
 if (!ob||environment(ob)!=this_object())
      return;
 message("vision","一阵寒风吹过,你觉得身上有些冷!\n",this_object());
 return;
}