// Room: /open/wjw/room/starroom.c
inherit ROOM;

void create ()
{
  set ("short", "1");
  set ("long", @LONG
这是一间什么都没有的房间。
LONG);

  set("no_fight", 1);
  set("light_up", 1);
  set("no_magic", 1);

  setup();
}
