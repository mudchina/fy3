// Room: /d/suzhou/tbgju
inherit ROOM;

void create()
{
  set ("short", "田伯光居");
  set ("long", @LONG
这是间布置十分豪华的房间，屋内弥漫着一股香味，闻上去让你感
到昏昏欲睡。房间左手一张大床，十分显眼。床边站立一人，正色咪咪
的看着你。
LONG);

	set("objects",([
		__DIR__"npc/tianboguang":1,
	]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"yuannei1",
]));
  setup();
  replace_program(ROOM);
}
