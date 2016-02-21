// thd:hill5.c

inherit ROOM;

void create()
{
      set("short", "山路");
	set("long", @LONG
这是条蜿蜒向上的山路。山路两旁一草一石，一花一木虽都平常，确
处处显现出一派自然风光，决不是俗世中的花红柳绿、残花败叶所能比拟
的。在这里连残叶都能成为一道风景。习习凉风吹来，不由得使登山之人
产生一种投入大自然的舒畅之感。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "northup" : __DIR__"hill6",  
          "southeast" : __DIR__"hill2",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

