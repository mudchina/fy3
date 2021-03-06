// Room: /d/kaifeng/xianguosi.c

inherit ROOM;

void create()
{
	set("short", "大相国寺");
	set("long", @LONG
大相国寺占地500余亩，辖64个禅，律院，养僧千余。是京城最大
的寺院和全国佛教活动中心。门前『大相国寺』的匾额乃是当今御笔
亲书。大门敞开，多有行人来往。
LONG
	);
set("valid_startroom",1);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhike.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"qianyuan",
  "south" : __DIR__"jiedao",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
