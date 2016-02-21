//chufang1.c
inherit ROOM;
void create()
{
  set("short","厨房");
  set("long", @LONG
从一条阴森的小道走过,道两边是高大的乔木.就是风雷堂的厨房.一个娇
小的侍女正在忙活,几口大锅也正冒着腾腾热气.
LONG  );
  set("exits",([
      "east" : __DIR__"grass2",
  ]));
  set("item_desc",([
      "note" : "人是铁，饭是钢，一顿不吃饿得慌。\n",
  ]));

  set("objects",([
      __DIR__"npc/shinu" : 1,
      __DIR__"obj/tea" : random(6),
      __DIR__"obj/sherou"  : random(4),
  ]));
//  set("no_clean_up", 0);
  setup();
}
int valid_leave(object me, string dir)
{
	if (( present("tea", me)||present("she rou", me))
	&&objectp(present("shi nu", environment(me))) )
	return notify_fail
	("侍女美目一挑，你还是在这儿吃完吧。\n");
	return ::valid_leave(me, dir);
}

