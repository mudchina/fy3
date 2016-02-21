// thd:bookroom.c

inherit ROOM;


void create ()
{
  set ("short", "密室");
  set ("long", @LONG
   想不到里面竟别有洞天。只见对墙上插着一把锈了的刀(boade). 
   两面的书架上都是“武功秘籍”，正面的桌上也放着两册书，走近一看 
   只见上面写着六个金篆“道心种魔大法”。
LONG);
  set("item_desc", ([ /* sizeof() == 1 */
  "boade" :
   "这是一把长满了黄色锈斑的长刀，虽然样式奇古，却毫不起眼.",
]));

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"workroom.c",
  "down" : "/u/cyj/room/shizhong.c",
]));
  set("no_fight", 10);
  setup();
}
