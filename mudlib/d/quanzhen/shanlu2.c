// shanlu2.c ɽ·


inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
	һ��ɽ·����������ͨ��ɽ�ϡ������ɽ�Ϻ�����һƬ�����֣���
��������¶��ͤ�ӵ�һ�ǣ����������ɽ��·��
LONG
	);

	set("exits", ([
		"northeast" : __DIR__"shanlu3",
		"southeast" : __DIR__"shanlu4",
		"westdown" : __DIR__"shanlu1",
	]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}
