// Room: /open/stst/sazai/dating.c

inherit ROOM;

void create()
{
        set("short", "大厅");
        set("long", @LONG
        这里是野羊寨的议事大厅。这大厅占地极广，厅中有四根一人都抱
不过来的大石柱，厅的正中有二把太师椅，椅子上铺着虎皮，两旁各有十来
把椅子，都是上好的红木制成的。太师椅后面是张供桌，供奉着关公，两旁
两根小臂般粗细的红蜡烛。

LONG

        );
        set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"da",
  "south" : __DIR__"lu6",
  "east" : __DIR__"er",
]));
	set("objects",([
		__DIR__"npc/erzaizhu":1,
]));

        setup();
        replace_program(ROOM);
}

