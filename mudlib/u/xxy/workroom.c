// Room: /u/xxy/workroom.c

inherit ROOM;

void create ()
{
  set ("short", "惊神殿");
  set ("long", @LONG
这是一个深埋在地底的洞穴,四壁雕刻着一些不知名的动植物,洞壁的裂缝里露出暗
红的光芒,顶端的一颗夜明珠发出冷冷的一片雾霭,一道清泉从洞壁的一个口子中喷涌而
出,汇入下面的石池,洞的中间有一尊石像(xiang),形态高古.
LONG);

  set("no_magic", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"sleeproom.c",
  "zz" : "/d/wiz/meeting",
  "emei" : "/d/room/road.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "xiang" : "因为年代久远,石像上覆盖了一层青苔,你仔细看了看,吃了一惊,居然是用金刚石雕刻
而成的.
",
]));

  setup();
}
