// Room: /d/tianxia/1road3
inherit ROOM;

void create()
{
  set ("short", "小路");
  set ("long", @LONG
鹅卵石的小道，直接通向北面上壁下的一个洞窟，洞窟用两扇大
铁门锁着，从洞的深处传来人的惨叫。牵连的爬藤植物从铁门的上
端爬下来，一直拖到地上，抬头看的话，只见到层层的藤蔓和高树，再
上去就是凄惨的天空。
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"1dongku",
  "south" : __DIR__"1road2",
]));
  setup();
}
