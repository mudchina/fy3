// Room: /u/xxy/test/tongshen
inherit ROOM;

void create()
{
  set ("short", "童生考场");
  set ("long", @LONG
这里是考童生的地方。
。
LONG);

  setup();
  replace_program(ROOM);
}
