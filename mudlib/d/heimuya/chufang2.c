//chufang1.c
inherit ROOM;
void create()
{
  set("short","厨房");
  set("long", @LONG
这是小厨房，专为日月教中的高层服务，不过菜肴好象不大丰富。据说
圣姑因此而常出走下山。厨房中收拾得十分干净，连锅碗瓢盆都看不到。厨房
外面是个小小的池塘。
LONG  );
  set("exits",([
      "west" : __DIR__"chitang",
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
	("侍女美目一挑:你想[吃不完兜着走啊],还不快放下。\n");
	return ::valid_leave(me, dir);
}

