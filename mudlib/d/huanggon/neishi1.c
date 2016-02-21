// Room: /d/huanggon/neishi1
inherit ROOM;

void create()
{
  set ("short", "药铺内室");
  set ("long", @LONG
一间小房间,靠墙摆着几只柜子,桌上是十几丸丹药,房间中没有窗户.
只是个普通的房间,地上铺了地板,有一块好象搽试得特别干净,东边是药
铺的正堂,喧闹得很.
LONG);

  set("exits", ([ /* sizeof() == 1 */
"east":__DIR__"tongyaopu",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "地板" : "这地板看来有些古怪,不知能不能掀开来.(open 地板).
",
]));
  setup();
}
void init()
{
   add_action("do_open","open");
}
int do_open(string arg)
{
 object ob=this_player();
   if (!arg||arg!="地板") return 0;
  if (ob->query_str()<25)
  return notify_fail("你用力推动地板,结果地板纹丝不动.\n");
  message_vision("$N用力推动地板,地上露出一个洞口.\n",ob);
  set("exits/down",__DIR__"dijiao");
  return 1;
}