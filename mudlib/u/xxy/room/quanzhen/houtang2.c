// houtang2.c ���ö���


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "���ö���");
	set("long", @LONG
	������ȫ��̵���ƽ�������书�ĵط�������ò������ھ���Ҫ
���������䣬����������Ҳȫ������ǽ��ȥ�ˣ������ڳ���һ��Ƭ�յ�����
LONG
	);

	set("exits", ([
		"east" : __DIR__"houtang3",
		"west" : __DIR__"houtang1",
		"south" : __DIR__"wuchang1",
		"north" : __DIR__"liangong",
	]));

	setup();
	replace_program(ROOM);
}