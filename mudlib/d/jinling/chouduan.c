// Room: /u/cyj/room/chouduan
inherit ROOM;

void create()
{
  set ("short", "万福绸庄");
  set ("long", @LONG
走进万福绸庄顿觉眼前一亮，只见四周墙上，架子上……，到处都挂
着五彩缤纷的绸缎。此外，靠门口处还挂着一些已做好的成衣，供客人马上挑选。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"changjie4.c",
]));
  setup();
}
