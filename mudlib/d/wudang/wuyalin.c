// tyroad4.c ���ɽ·
// by Marz 

inherit ROOM;
void create()
{
	set("short", "��ѻ��");
	set("long", @LONG
	�����䵱����ѻ�룬��ǰ��һƬ����ڣ�ɽ·���������һ�����ͱڣ�
һ�������¡��߸ߵ�������(feng)�����������У���Լ�ɼ����������ԵĽ����
�����˶���ϸ������Լ��Ľ��£�����̧ͷ��һ�ۣ�Ω��һ��С��ˤ��ȥ������
ǿ�˳û���٣������޲�����������ֻ�����·��
LONG
	);

		set("exits", ([
		"northup" : __DIR__"sanlao",
		"southdown" : __DIR__"nanyan",
	]));

                                    
	setup();
}
