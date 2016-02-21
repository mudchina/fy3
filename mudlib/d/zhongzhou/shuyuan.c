// Room: /d/zhongzhou/shuyuan.c

inherit ROOM;

void create()
{
	set("short", "书院");
	set("long", @LONG
这是中州城南的一家书院，虽说这家书院不大，听说从这里学有所成
的人还不少，今兵部尚书刘大人也在这里念过书。书院里有几个人摇头晃
脑正在念着四书五经。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xuxiake.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"wendingnan4",
]));

	set("no_fight",1);
	setup();
}
int valid_leave(object ob,string dir)
{
  if (dir=="east"&&ob->query_temp("mark/徐"))
   ob->delete_temp("mark/徐");
   return ::valid_leave(ob,dir);
}
