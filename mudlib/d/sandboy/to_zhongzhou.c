// Room: /d/sandboy/to_zhongzhou.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
��һ���޼ʵ�ƽҰ֮��,���������ͬ���һ��,������ɫ��ũ��,
���������ݵĶ���.�����Ƽ���¶����ɽ��Ӱ��.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/zhongzhou/dongmeng",
  "east" : __DIR__"to_zhongzhou2",
]));
set("outdoors","/d/jiangnan");

	setup();
	replace_program(ROOM);
}