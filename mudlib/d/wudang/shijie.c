// Room: /d/wudang/shijie.c

inherit ROOM;

void create()
{
	set("short", "石阶");
	set("long", @LONG
你走在一条坚实的石阶上，不时地有进香客从你的身边走过。一边是峭壁，
一边是悬崖，抬头隐约可见笼罩在云雾中的天柱峰，听着流水淙淙，令人心旷神
怡。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"xuanwumen",
  "southdown" : __DIR__"shulin1",
]));
        set("objects", ([
        __DIR__"npc/baibian" : 1]));

	setup();
	replace_program(ROOM);
}
