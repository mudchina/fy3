//Room: /d/dali/dasenlin.c
//Date: June. 29 1998 by Java

inherit ROOM;
void create()
{
	set("short","大森林");
	set("long",@LONG
此去向北是无量山区和大森林，这里已经林木茂密人迹
罕至了，南面是大理到中原的官道大路。
LONG);
	set("outdoors", "dali");
	set("exits",([ /* sizeof() == 1 */
	    "south"   : __DIR__"dianchi",
	    "north"   : __DIR__"heisenlin",
	]));
	set("objects",([
		"/npc/man5":2,
	]));
	setup();
	replace_program(ROOM);
}

